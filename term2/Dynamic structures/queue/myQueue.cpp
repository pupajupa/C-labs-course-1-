#include <iostream>

template<typename T>
class my_shared_ptr {
private:
	T* ptr = nullptr;
	size_t* counter = nullptr;
public:
	my_shared_ptr() {}
	my_shared_ptr(T* ptr) :ptr(ptr), counter(new size_t(1)) {}
	my_shared_ptr(const my_shared_ptr& other) :ptr(other.ptr), counter(other.counter) {
		++(*counter);
	}
	my_shared_ptr(my_shared_ptr&& other) :ptr(other.ptr), counter(other.counter) {
		other.ptr = nullptr;
		other.counter = nullptr;
	}
	T& operator*() const {
		return *ptr;
	}
	T* operator->()const {
		return ptr;
	}
    bool operator!() const {
        return !ptr;
    }
    operator bool() const {
        return ptr != nullptr;
    }
	size_t use_count() const {
		return *counter;
	}
	~my_shared_ptr() {
		if (*counter > 1) {
			--* counter;
			return;
		}
		delete ptr;
		delete counter;
	}
    template<typename T, typename... Args>
    my_shared_ptr<T> make_shared(Args&&... args) {
        return my_shared_ptr<T>(new T(std::forward<Args>(args)...));
    }
    void reset() { // Сброс weak_ptr
        if (counter) {
            --(*counter);
            if (*counter == 0) {
                delete ptr;
                delete counter;
            }
        }
        ptr = nullptr;
        counter = nullptr;
    }
    bool operator!=(const my_shared_ptr<T>& other) const {
        return ptr != other.ptr;  // Сравниваем указатели на объекты
    }
    my_shared_ptr<T>& operator=(const my_shared_ptr<T>& other) {
        if (this == &other) {
            return *this;  // Проверка на самоприсваивание
        }
        // Копируем указатель на управляемый объект и счетчик ссылок
        ptr = other.ptr;
        counter = other.counter;
        // Увеличиваем счетчик ссылок нового объекта
        if (counter) {
            ++(*counter);
        }
        return *this;
    }
};

template <typename T>
class MyQueue {
public:
    struct Node {
        T value;
        my_shared_ptr<Node> next;
        my_shared_ptr<Node> prev;

        Node(const T& val) : value(val), next(nullptr), prev(nullptr) {}
    };

public:
    // Конструктор по умолчанию
    MyQueue() : size_(0), front_(nullptr), back_(nullptr) {}

    // Добавление элемента в начало очереди
    void pushFront(const T& value) {
        my_shared_ptr<Node> newNode = newNode.make_shared<Node>(value);
        if (empty()) {
            front_ = newNode;
            back_ = newNode;
        }
        else {
            newNode->next = front_;
            front_->prev = newNode;
            front_ = newNode;
        }
        ++size_;
    }

    // Добавление элемента в конец очереди
    void pushBack(const T& value) {
        my_shared_ptr<Node> newNode = newNode.make_shared<Node>(value);
        if (empty()) {
            front_ = newNode;
            back_ = newNode;
        }
        else {
            newNode->prev = back_;
            back_->next = newNode;
            back_ = newNode;
        }
        ++size_;
    }

    // Удаление элемента из начала очереди
    void popFront() {
        if (!empty()) {
            front_ = front_->next;
            if (front_) {
                front_->prev = nullptr;
            }
            else {
                back_ = nullptr;
            }
            --size_;
        }
    }
    // Получение элемента из начала очереди
    T& front() const {
        if (!empty()) {
            return front_->value;
        }
        throw std::runtime_error("Deque is empty");
    }

    // Получение элемента из конца очереди
    T& back() const {
        if (!empty()) {
            return back_->value;
        }
        throw std::runtime_error("Deque is empty");
    }
    // Проверка на пустоту
    bool empty() const {
        return size_ == 0;
    }
    // Получение размера очереди
    size_t size() const {
        return size_;
    }
    size_t size_;
    my_shared_ptr<Node> front_;
    my_shared_ptr<Node> back_;
};
template <typename T>
class QueueForTask : public MyQueue<T> {
public:
    void bubbleSort() {
        if (this->empty()) {
            return;
        }
        bool swapped;
        do {
            swapped = false;
            auto node = this->front_;
            while (node->next != nullptr) {
                if (node->value > node->next->value) {
                    std::swap(node->value, node->next->value);
                    swapped = true;
                }
                node = node->next;
            }
        } while (swapped);
    }
};
template <typename T>
class DequeIterator {
public:
    DequeIterator() : ptr(nullptr), size_(0), begin(0), current(0) {}
    DequeIterator(T* ptr, size_t size, size_t begin, size_t current) :
        ptr(ptr), size_(size), begin(begin), current(current) {}
    T& operator*() const {
        if (current >= size_)
            throw;
        return ptr[index()];
    }

    DequeIterator& operator++() {
        ++current;
        return *this;
    }

    DequeIterator& operator--() {
        --current;
        return *this;
    }

    DequeIterator operator++(int) {
        DequeIterator temp(*this);
        ++(*this);
        return temp;
    }

    DequeIterator operator--(int) {
        DequeIterator temp(*this);
        --(*this);
        return temp;
    }

    DequeIterator operator+(int n) const {
        return DequeIterator(ptr, size_, begin, current + n);
    }

    DequeIterator operator-(int n) const {
        return DequeIterator(ptr, size_, begin, current - n);
    }

    DequeIterator operator-(const DequeIterator& other) const {
        return static_cast<DequeIterator>(current - other.current);
    }

    bool operator==(const DequeIterator& other) const {
        return ptr == other.ptr && size_ == other.size_ && begin == other.begin && current == other.current;
    }

    bool operator!=(const DequeIterator& other) const {
        return !(*this == other);
    }

    bool operator<(const DequeIterator& other) const {
        return current < other.current;
    }

    bool operator>(const DequeIterator& other) const {
        return current > other.current;
    }

    bool operator<=(const DequeIterator& other) const {
        return current <= other.current;
    }

    bool operator>=(const DequeIterator& other) const {
        return current >= other.current;
    }

    DequeIterator& operator+=(int n) {
        current += n;
        return *this;
    }

    DequeIterator& operator-=(int n) {
        current -= n;
        return *this;
    }

    T& operator[](int n) const {
        return *(*this + n);
    }
private:
    T* ptr; // Указатель на массив элементов
    size_t size_; // Размер буфера массива
    size_t begin; // Инд
    size_t current;
    size_t index() const {
        return (begin + current) % size_;
    }
};
template<typename T>
class Deque: public DequeIterator<T> {
private:
    T* a;
    size_t sz;
    size_t front_;
    size_t back_;
    size_t capacity;
    void resize(size_t);
public:

    Deque() : sz(1), front_(1), back_(0), capacity(1), a(new T[1]) {}
    void push_back(T);
    void push_front(T);
    void pop_back();
    void pop_front();
    size_t size() const;
    T back() const;
    T front() const;
    DequeIterator<T> begin() {
        return DequeIterator<T>(a, sz, front_, 1);
    }
    DequeIterator<T> end() {
        return DequeIterator<T>(a, sz, front_, back_+1);
    }
    void clear();
};


template<typename T>
void Deque<T>::resize(size_t newcapacity) {  //Функция изменения размера.
    T* tmp = new T[newcapacity];   //Создаем новый динамический массив с новой размерностью
    size_t j = front_;                     //Присваиваем начальное значение счетчику.
    for (size_t i = 0; j != back_; ++i) {     //Продвигаемся по деку, пока счетчик не будет равен позиции последнего элемента.
        tmp[i] = a[j];
        j = (j + 1) % capacity;
    }
    tmp[sz - 1] = a[back_];    //Так как в цикле перенос последнего элемента из старого массива в новый не произошел, вручную переносим последний элемент старого массива.
    delete[]a;                   //Удаляем лишнюю память.
    a = tmp;                      //Присваиваем указателю на старый массив указатель на новый массив.
    capacity = newcapacity;       //Меняем значение вместимости.
    front_ = 0;                   //Теперь первый элемент нового массива стоит на нулевой позиции.
    back_ = sz - 1;            //А последний - на позиции на единицу меньшей чем кол-во элементов.
}

template<typename T>
void Deque<T>::push_back(T value) {
    if (sz == capacity) {
        this->resize(2 * capacity);
    }
    back_ = (back_ + 1) % capacity;
    a[back_] = value;
    sz++;
}
template<typename T>
void Deque<T>::push_front(T value) {
    if (sz == capacity) {
        this->resize(2 * capacity);
    }
    front_ = (front_ - 1 + capacity) % capacity;
    a[front_] = value;
    sz++;
}
template<typename T>
void Deque<T>::pop_back() {
    back_ = (back_ - 1 + capacity) % capacity;
    sz--;
}
template<typename T>
void Deque<T>::pop_front() {
    front_ = (front_ + 1) % capacity;
    sz--;
}
template<typename T>
size_t Deque<T>::size() const {
    return sz;
}
template<typename T>
T Deque<T>::front() const {
    return a[front_+1];
}
template<typename T>
T Deque<T>::back() const {
    return a[back_];
}
template<typename T>
void Deque<T>::clear() {
    back_ = 0;
    front_ = 1;
    sz = 0;
}
int main() {
    QueueForTask<int> deque;



    //for (int i = 0; i < 10; i++) {
    //    deque.push_back(i);
    //}
    //std::cout << deque.back() << " sdsds " << deque.front() << std::endl;
    //auto it = deque.begin();
    //for ( it = deque.begin(); it != deque.end(); ++it) {
    //    std::cout << *it << " ";
    //}
    //std::cout << std::endl;
    //std::cout<<std::endl;
    //deque.push_front(0);
    //for (it = deque.begin(); it != deque.end(); ++it) {
    //    std::cout << *it << " ";
    //}
    //std::cout << std::endl;
    deque.pushBack(10);
    deque.pushBack(2);
    deque.pushFront(30);
    deque.pushFront(4);
    deque.pushBack(11);
    deque.pushBack(22);
    std::cout << "Front: " << deque.front() << std::endl; // Front: 4
    std::cout << "Back: " << deque.back() << std::endl; // Back: 2

    std::cout << "Size: " << deque.size() << std::endl; // Size: 2
    deque.bubbleSort();
    my_shared_ptr<MyQueue<int>::Node> current = deque.front_;
    while (current) {
        std::cout << current->value << " ";
        current = current->next;
    }
}

