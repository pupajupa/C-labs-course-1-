#ifndef STRING_H
#define STRING_H

#include "StringDll_global.h"

#include <iostream>

class my_unique_ptr {
private:
	char* ptr;
public:
	my_unique_ptr(char* ptr = nullptr) :ptr(ptr) {}
	~my_unique_ptr() {
		if (ptr) {
			delete ptr;
		}
	}
	my_unique_ptr(const my_unique_ptr&) = delete;
	my_unique_ptr& operator=(const my_unique_ptr&) = delete;
	my_unique_ptr(my_unique_ptr&& another) noexcept : ptr(another.ptr) {
		another.ptr = nullptr;
	}
	my_unique_ptr& operator = (my_unique_ptr&& another) noexcept {
		if (&another == this)
			return *this;
		if (ptr) {
			delete ptr;
		}
		ptr = another.ptr;
		another.ptr = nullptr;
		return *this;
	}
	char& operator*() const {
		return *ptr;
	}
	char* operator->() const {
		return ptr;
	}
	char* get() const noexcept {
		return ptr;
	}
};
class Iterator {
private:
	char* ptr;
public:
	Iterator();
	Iterator(char* ptr);
	~Iterator();
	char& operator*() const;
	char* operator->() const;
	bool operator==(const Iterator& other) const;
	bool operator!=(const Iterator& other) const;
	Iterator& operator=(const Iterator& temp);
	Iterator& operator++();
	Iterator operator++(int);
	Iterator& operator--();
	Iterator operator--(int);
};

class STRINGDLL_EXPORT String : public Iterator {
private:
	my_unique_ptr str;
	size_t sz;
	size_t cap;
public:
	String();
	String(char* string);
	~String();
	String(const String& str);
	String& operator=(const String& other);
	char& operator[](size_t i);
	char& at(size_t i);
	void pop_back();
	size_t capacity();
	void clear();
	void push_back(const char& s);
	size_t my_strlen(const char* s);
	size_t my_strnlen(const char* s, size_t n);
	size_t size()const;
	char* my_strcpy(char* s1, const char* s2);
	char* my_strncpy(char* s1, const char* s2, size_t n);
	int my_strcmp(const char* s1, const char* s2);
	int my_strncmp(const char* s1, const char* s2, size_t n);
	int my_memcmp(const void* s1, const void* s2, size_t n);
	int my_strcoll(const char* s1, const char* s2);
	size_t my_strxfrm(char* s1, const char* s2, size_t n);
	void* my_memset(void* s, int c, size_t n);
	void* my_memcpy(void* s1, const void* s2, size_t n);
	void* my_memmove(void* s1, const void* s2, size_t n);
	const char* my_strerror(int errnum);
	char* my_strtok(char* s1, const char* s2);
	char* my_strchr(const char* s, int ch);
	bool operator==(const char* s) const;
	bool operator==(const String& other) const;
	bool operator!=(const char* s) const;
	bool operator!=(const String& other) const;
	bool operator<(const char* s) const;
	bool operator<(const String& other) const;
	bool operator>(const char* s) const;
	bool operator>(const String& other) const;
	operator std::string();
	bool empty()const;
	char* c_str();
	Iterator begin();
	Iterator end();
	const Iterator cbegin();
	const Iterator cend();
	String& operator=(const char* str);
	String& operator+(const String& str);
	String& operator+=(const String& other);
	friend std::ostream& operator<<(std::ostream& os, const String& string);
	friend std::istream& operator>>(std::istream& is, String& str);
	String(QString& s);
};

#endif // STRING_H

