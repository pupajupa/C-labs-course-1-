#ifndef DEQUE_H
#define DEQUE_H
#include <iostream>
#include <QString>
template <typename T>
class DequeIterator {
public:
	DequeIterator(){};
	DequeIterator(T** ptr, size_t size, size_t current) :
		ptr(ptr), size_(size), current(current) {}
	DequeIterator& operator++() {//prefix
		++current;
		current%=size_;
		return *this;
	}

	DequeIterator& operator--() {//prefix
		--current;
		current+=size_;
		current%=size_;
		return *this;
	}

	DequeIterator operator++(int) {//postfix
		DequeIterator temp(*this);
		current++;
		current%=size_;
		return temp;
	}

	DequeIterator operator--(int) {//postfix
		DequeIterator temp(*this);
		current--;
		current+=size_;
		current%=size_;
		return temp;
	}
	DequeIterator operator+(int n) const {
		return DequeIterator(ptr, size_, begin, current + n);
	}
	DequeIterator operator-(int n) const {
		return DequeIterator(ptr, size_, begin, current - n);
	}
	T& operator*() const{
		return *ptr[current];
	}
	bool operator==(const DequeIterator& other) const {
		return ptr == other.ptr && current == other.current;
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
private:
	T** ptr; // Указатель на массив элементов
	size_t size_; // Размер буфера массива
	size_t begin; // Индекс начала массива
	size_t current;//Индекс тпекущего
};
template<typename T>
class Deque: public DequeIterator<T> {
private:
	T** a;
	size_t sz;
	size_t front_;
	size_t back_;
	size_t capacity;
	void resize(size_t);
public:

	Deque(size_t cap){
		capacity = cap;
		a = new T*[capacity];
		for(size_t i = 0;i<capacity;i++){
			a[i] = new T;
		}
		sz = 0;
		front_ = 0;
		back_=-1;
	}
	void push_back(T&);
	void push_front(T&);
	void pop_back();
	void pop_front();
	size_t size() const;
	T back() const;
	T front() const;
	DequeIterator<T> begin() {
		return DequeIterator<T>(a, sz, front_);
	}
	DequeIterator<T> end() {
		return DequeIterator<T>(a, sz, (back_+1) % capacity);
	}
	QString show(Deque<T> q){
		QString res;
		for(auto it = q.begin();it!=q.end();++it){
			res.append(QString::number(*it));
			res.append(" ");
		}
		return res;
	}
	bool empty(){
		return sz ==0;
	}
	void clear();
};


template<typename T>
void Deque<T>::resize(size_t newcapacity) {  //Функция изменения размера.
	T** tmp = new T*[newcapacity];   //Создаем новый динамический массив с новой размерностью
	for(size_t i= 0; i<newcapacity;i++){
		tmp[i] = new T;
	}//Присваиваем начальное значение счетчику.
	size_t i = 0;
	for (auto it = begin(); it != end(); ++it,i++) {
		*tmp[i]=*it;
	}
	for(size_t j = 0;j<capacity;j++){
		delete a[j];
	}
	delete[]a;                   //Удаляем лишнюю память.
	a = tmp;                      //Присваиваем указателю на старый массив указатель на новый массив.
	capacity = newcapacity;       //Меняем вместимость.
	front_ = 0;                   //Теперь первый элемент нового массива стоит на нулевой позиции.
	back_ = sz - 1;            //А последний - на позиции на единицу меньшей чем кол-во элементов.
}

template<typename T>
void Deque<T>::push_back(T& value) {
	if (sz == capacity) {
		this->resize(2 * capacity);
	}
	back_ = (back_ + 1) % capacity;
	*a[back_] = value;
	sz++;
}
template<typename T>
void Deque<T>::push_front(T &value) {
	if (sz == capacity) {
		this->resize(2 * capacity);
	}
	front_ = (front_ - 1 + capacity) % capacity;
	*a[front_] = value;
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
	for(size_t i = 0; i<sz;i++){
		delete a[i];
	}
	back_ = -1;
	front_ = 0;
	sz = 0;
}

#endif // DEQUE_H
