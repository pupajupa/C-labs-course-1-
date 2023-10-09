#include <iostream>

template <typename T>
class unique_ptr {
private:
	T* ptr;
public:
	explicit unique_ptr(T* ptr) :ptr(ptr) {}
	~unique_ptr() {
		delete ptr;
	}
	unique_ptr(const unique_ptr&) = delete;
	unique_ptr& operator=(const unique_ptr&) = delete;
	unique_ptr(unique_ptr&& another) noexcept : ptr(another.ptr) {
		another.ptr = nullptr;
	}
	unique_ptr& operator = (unique_ptr&& another) noexcept {
		delete ptr;
		ptr = another.ptr;
		another.ptr = nullptr;
	}
	T& operator*() const {
		return *ptr;
	}
	T* operator->() const {
		return ptr;
	}
};

template <typename T>
class shared_ptr {
private:
	T* ptr = nullptr;
	size_t* counter = nullptr;
public:
	shared_ptr(){}
	shared_ptr(T* ptr):ptr(ptr),counter(new size_t(1)){}
	shared_ptr(const shared_ptr& other) :ptr(other.ptr), counter(other.counter) {
		*counter++;
	}
	shared_ptr(shared_ptr&& other) :ptr(other.ptr), counter(other.counter) {
		other.ptr = nullptr;
		other.counter = nullptr;
	}
	T& operator*() const {
		return *ptr;
	}
	T* operator->()const {
		return ptr;
	}
	size_t use_count() const {
		return *counter;
	}
	~shared_ptr() {
		if (*counter > 1) {
			--* counter;
			return;
		}
		delete ptr;
		delete counter;
	}
};