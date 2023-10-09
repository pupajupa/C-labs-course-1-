#ifndef MYQUEUE_H
#define MYQUEUE_H
#include <utility>
#include <stdexcept>
#include <QString>
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
	template<typename U, typename... Args>
	my_shared_ptr<U> make_shared(Args&&... args) {
		return my_shared_ptr<U>(new U(std::forward<Args>(args)...));
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
	// Конструктор по умолчанию
	MyQueue() : size_(0), front_(nullptr), back_(nullptr) {}
	// Добавление элемента в начало очереди
	void pushFront(const T& value){
		my_shared_ptr<Node> newNode = newNode.template make_shared<Node>(value);
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

	// Удаление элемента из начала очереди
	void popFront(){
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
	T& front() const{
	if (!empty()) {
		return front_->value;
	}
		throw std::runtime_error("Deque is empty");
	}

	// Получение элемента из конца очереди
	T& back() const{
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
	size_t size() const{
		return size_;
	}
	QString toString(MyQueue<T> q){
		QString result;
		my_shared_ptr<MyQueue<int>::Node> current = q.front_;
		while (current) {
			result.append(QString::number(current->value));
			result.append(" ");
			current = current->next;
		}
		return result;
	}
	size_t size_;
	my_shared_ptr<Node> front_;
	my_shared_ptr<Node> back_;
};
#endif // MYQUEUE_H
