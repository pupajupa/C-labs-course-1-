#pragma once
#include <iostream>
#include <cmath>
template <typename T>
class iterator {
private:
	T* ptr;
public:
	T& operator*();
	T* operator->();
	iterator<T>& operator++();
	iterator<T> operator++(int);
	iterator<T>& operator--();
	iterator<T> operator--(int);
	T* base() const;
	bool operator==(iterator compare);
	bool operator!=(iterator compare);
	bool operator<(iterator compare);
	bool operator>(iterator compare);
	bool operator<=(iterator compare);
	bool operator>=(iterator compare);
	bool operator==(const iterator compare)const;
	bool operator!=(const iterator compare)const;
	bool operator<(const iterator compare)const;
	bool operator>(const iterator compare)const;
	bool operator<=(const iterator compare)const;
	bool operator>=(const iterator compare) const;
	iterator<T> operator+(int i);
	iterator<T> operator-(int i);
	iterator<T> operator+(const int i) const;
	iterator<T> operator-(const int i) const;
	iterator(T* ptr);
	iterator();
};

template <typename T>
class reverse_iterator {
private:
	T* ptr;
public:
	reverse_iterator(T* ptr);
	reverse_iterator();
	T& operator*();
	T* operator->();
	reverse_iterator<T>& operator++();
	reverse_iterator<T> operator++(int);
	reverse_iterator<T>& operator--();
	reverse_iterator<T> operator--(int);
	T* base() const;
	
	bool operator==(reverse_iterator compare);
	bool operator!=(reverse_iterator compare);
	bool operator<(reverse_iterator compare);
	bool operator>(reverse_iterator compare);
	bool operator<=(reverse_iterator compare);
	bool operator>=(reverse_iterator compare);
	reverse_iterator<T> operator+(int i);
	reverse_iterator<T> operator-(int i);
};

template <typename T>

class Vector :public iterator<T>, public reverse_iterator<T> {
private:
	T* arr; //указатель на массив
	size_t sz = 0;//размер
	size_t cap = 1;//количество выделенной памяти
public:
	Vector();
	Vector(Vector<T>&& other);
	~Vector();
	Vector(size_t n, const T& value = T());
	Vector(const Vector<T>& other);
	Vector<T>& operator=(const Vector<T>& other);
	size_t size() const;
	size_t capacity() const;
	void reserve(size_t);
	void resize(size_t n, const T& value = T());
	void push_back(T value);
	void pop_back();
	bool empty()const;
	T& operator [](size_t i);
	T* at(size_t i);
	void erase(size_t i);
	iterator<T> begin() {
		return iterator<T>(&arr[0]);
	}
	iterator<T> cbegin() const {
		return iterator<T>(arr);
	}
	iterator<T> end() {
		return iterator<T>(&arr[sz]);
	}
	iterator<T> cend() const {
		return iterator<T>(arr + sz);
	}
	reverse_iterator<T> rbegin() {
		return reverse_iterator<T>(arr + sz - 1);
	}
	reverse_iterator<T> rend() {
		return reverse_iterator<T>(arr - 1);
	}
	T* front();
	T* back();
	void clear();
	T* data();
	size_t max_size();
	void assign(iterator<T> start, iterator<T> end);
	void swap(Vector<T>& other);
	void insert(const iterator<T>& it, const T& value);
	void emplace(const int& pos, T&& elem);
	template <typename... Args>
	void emplace_back(Args &&...args);
};
