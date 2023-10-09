#include "MyString.h"
#include <QString>

Iterator::Iterator() {};
Iterator::Iterator(char* pt)
{
	pt = ptr;
}
Iterator::~Iterator() {};

Iterator& Iterator::operator++() {
	++ptr;
	return *this;
}

Iterator Iterator::operator++(int) {
	Iterator tmp = *this;
	++ptr;
	return tmp;
}

Iterator& Iterator::operator--() {
	--ptr;
	return *this;
}


Iterator Iterator::operator--(int) {
	Iterator tmp = *this;
	--ptr;
	return tmp;
}

char& Iterator::operator*() const {
	return *ptr;
}

char* Iterator::operator->() const {
	return ptr;
}

bool Iterator::operator==(const Iterator& other) const {
	return ptr == other.ptr;
}

bool Iterator::operator!=(const Iterator& other) const {
	return ptr != other.ptr;
}
Iterator& Iterator::operator=(const Iterator& temp)
{
	ptr = temp.ptr;
	return *this;
}


String::String() {
	sz = 0;
	cap = 1;
	str = new char[cap];
	str.get()[0] = '\0';
}
String::String(char* string) {
	sz = my_strlen(string);
	str = new char[sz + 1];
	my_strcpy(str.get(), string);
	cap = sz + 1;
}
String::~String()
{
	sz = 0;
	cap = 0;
	str = nullptr;
}
String::String(const String& str)
{
	char* tmp = new char[str.sz + 1];
	for (size_t i = 0; i < str.sz; i++)
	{
		tmp[i] = str.str.get()[i];
	}
	tmp[str.sz] = '\0';

	this->str = tmp;
	sz = str.sz;
	cap = str.cap;
}
String::String(QString& s)
{
	char* tmp = new char[s.length()+ 1];
	tmp = const_cast<char*>(s.toUtf8().constData());
	tmp[s.length()] = '\0';
	this->str = tmp;
	sz = s.length();
	cap = s.capacity();
}
String& String::operator=(const String& other) {
	if (this != &other) {
		sz = other.sz;
		str = new char[sz + 1];
		my_strcpy(str.get(), other.str.get());
	}
	cap = sz + 1;
	return *this;
}
char& String::operator[](size_t i) {
	return str.get()[i];
}
char& String::at(size_t i) {//тоже самое что и оператор [] только безопасный
	if (i >= sz)
		throw my_strerror(12);
	return str.get()[i];
}
void String::pop_back()
{
	--sz;
	str.get()[sz] = '\0';
}
size_t String::capacity()
{
	return cap;
}
void String::clear()
{
	str = nullptr;
	str = new char[cap];
	str.get()[0] = '\0';
	sz = 0;
}
void String::push_back(const char& s) {
	sz++;
	if (sz > cap) {
		while (sz > cap) {
			cap *= 2;
		}
		str.get()[sz - 1] = s;
		char* temp = new char[cap];
		for (size_t i = 0; i < sz; i++) {
			temp[i] = str.get()[i];
		}
		temp[sz] = '\0';
		str = temp;
	}
	else {
		str.get()[sz] = s;
	}
}
size_t String::my_strlen(const char* s) {
	size_t length = 0;
	while (s[length] != '\0') {
		length++;
	}
	return length;
}
size_t String::my_strnlen(const char* s, size_t n) {
	size_t length = 0;
	while (length < n && s[length] != '\0') {
		++length;
	}
	return length;
}
size_t String::size()const {
	return sz;
}
char* String::my_strcpy(char* s1, const char* s2) {
	int i = 0;
	while (s2[i] != '\0') {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
char* String::my_strncpy(char* s1, const char* s2, size_t n) {
	char* result = s1;
	size_t i;
	for (i = 0; i < n && s2[i] != '\0'; i++) {
		s1[i] = s2[i];
	}
	for (; i < n; i++) {
		s1[i] = '\0';
	}
	return result;
}
//char* strcat(char* s1, const char* s2)
//{
//	size_t i = 0, j = 0;
//	while (s1[i] != '\0')
//	{
//		i++;
//	}
//	while (s2[j] != '\0')
//	{
//		s1[i] = s2[j];
//		i++;
//		j++;
//	}
//	s1[i] = '\0';
//	return s1;
//}
//char* strncat(char* s1, const char* s2, size_t n)
//{
//	char* temp = new char[my_strlen(s1) + n];
//	for (size_t i = 0; i < my_strlen(s1); i++) {
//		temp[i] = s1[i];
//	}
//	for (size_t i = my_strlen(s1); i < n+my_strlen(s1); i++) {
//		temp[i] = s2[i];
//	}
//	temp[my_strlen(s1) + n] = '\0';
//	return temp;
//}
int String::my_strcmp(const char* s1, const char* s2) {
	int i = 0;
	while (s1[i] == s2[i]) {
		if (s1[i] == '\0') {
			return 0;
		}
		i++;
	}
	return s1[i] - s2[i];
}
int String::my_strncmp(const char* s1, const char* s2, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		if (s1[i] != s2[i]) {
			return (s1[i] < s2[i]) ? -1 : 1;
		}
		if (s1[i] == '\0') {
			return 0;
		}
	}
	return 0;
}
int String::my_memcmp(const void* s1, const void* s2, size_t n) {
	const unsigned char* p1 = static_cast<const unsigned char*>(s1);
	const unsigned char* p2 = static_cast<const unsigned char*>(s2);
	for (size_t i = 0; i < n; ++i) {
		if (p1[i] < p2[i]) {
			return -1;
		}
		else if (p1[i] > p2[i]) {
			return 1;
		}
	}
	return 0;
}
int String::my_strcoll(const char* s1, const char* s2) {
	size_t i = 0;
	while (s1[i] && s2[i]) {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0') {
		return 0;
	}
	else if (s1[i] == '\0') {
		return -1;
	}
	else {
		return 1;
	}
}
size_t String::my_strxfrm(char* s1, const char* s2, size_t n) {
	size_t length = my_strlen(s2); // вычисляем длину s2
	if (length < n) {
		my_memcpy(s1, s2, length + 1); // копируем s2 в s1 с завершающим нулем
	}
	else if (n > 0) {
		my_memcpy(s1, s2, n - 1); // копируем n-1 символов из s2 в s1
		s1[n - 1] = '\0'; // добавляем завершающий нуль
	}
	return length; // возвращаем длину s2
}
void* String::my_memset(void* s, int c, size_t n) {
	unsigned char* p = static_cast<unsigned char*>(s);
	unsigned char ch = static_cast<unsigned char>(c);
	for (size_t i = 0; i < n; i++) {
		p[i] = ch;
	}
	return s;
}
void* String::my_memcpy(void* s1, const void* s2, size_t n) {
	// Приводим указатели к типу unsigned char*, чтобы копировать байты
	unsigned char* first = static_cast<unsigned char*>(s1);
	const unsigned char* sec = static_cast<const unsigned char*>(s2);
	// Копируем n байт из s2 в s1
	for (size_t i = 0; i < n; i++) {
		first[i] = sec[i];
	}
	return s1;
}
void* String::my_memmove(void* s1, const void* s2, size_t n) {
	char* first = static_cast<char*>(s1);
	const char* sec = static_cast<const char*>(s2);
	if (first == sec)
		return s1;
	if (first < sec) {
		for (size_t i = 0; i < n; i++) {
			first[i] = sec[i];
		}
	}
	else {
		for (size_t i = n; i > 0; i--) {
			first[i - 1] = sec[i - 1];
		}
	}
	return s1;
}
const char* String::my_strerror(int errnum) {
	switch (errnum) {
	case 0: //EXIT_SUCCESS
		return "Success";
	case 1: //EPERM
		return "Operation not permitted";
	case 2: //ENOENT
		return "No such file or directory";
	case 12: //ENOMEM
		return "Out of memory";
	case 13: //EACCES
		return "Permission denied";
	case 17: //EEXIST
		return "File exists";
	default:
		return "Unknown error";
	}
}
char* String::my_strtok(char* s1, const char* s2)
{
	//static
	char* last = 0;
	if (s1)
		last = s1;
	if ((last == 0) || (*last == 0))
		return 0;
	char* c = last;
	while (my_strchr(s2, *c))
		++c;
	if (*c == 0)
		return 0;
	char* start = c;
	while (*c && (my_strchr(s2, *c) == 0))
		++c;
	if (*c == 0) {
		last = c;
		return start;
	}
	*c = 0;
	last = c + 1;
	return start;
}
char* String::my_strchr(const char* s, int ch) {
	while (*s) {
		if (*s == ch) {
			return (char*)s;
		}
		s++;
	}
	// Если символ ch не найден, возвращаем NULL
	return NULL;
}
bool String::operator==(const char* s) const {
	return str.get() == s;
}

bool String::operator==(const String& other) const {
	return str.get() == other.str.get();
}

bool String::operator!=(const char* s) const {
	return str.get() != s;
}

bool String::operator!=(const String& other) const {
	return str.get() != other.str.get();
}

bool String::operator<(const char* s) const {
	return str.get() < s;
}

bool String::operator<(const String& other) const {
	return str.get() < other.str.get();
}
bool String::operator>(const char* s) const {
	return str.get() > s;
}

bool String::operator>(const String& other) const {
	return str.get() > other.str.get();
}
bool String::empty()const {
	return sz == 0;
}
char* String::c_str() {
	return str.get();
}
Iterator String::begin() {
	return Iterator(str.get());
}

Iterator String::end() {
	return Iterator(str.get() + sz);
}
const Iterator String::cbegin() {
	return Iterator(str.get());
}

const Iterator String::cend() {
	return Iterator(str.get() + sz);
}
String& String::operator=(const char* str)
{
	size_t tempSize = 0;
	while (str[tempSize])
	{
		tempSize++;
	}

	this->str = new char[tempSize + 1];
	for (size_t i = 0; i < tempSize; i++)
	{
		this->str.get()[i] = str[i];
	}
	this->str.get()[tempSize] = '\0';
	sz = tempSize;
	cap = sz;
	return *this;
}
String& String::operator+(const String& str)
{
	size_t tempsz = sz + str.sz;
	char* temp = new char[tempsz + 1];
	my_memcpy(temp, this->str.get(), sz);
	my_memcpy(temp + sz, str.str.get(), str.sz);
	temp[tempsz] = '\0';
	sz = tempsz;
	return *this;
}
String& String::operator+=(const String& other)
{
	char* new_data = new char[sz + other.sz];
	my_memcpy(new_data, str.get(), sz);
	my_memcpy(new_data + sz, other.str.get(), other.sz);
	str = new_data;
	this->str.get()[sz + other.sz - 1] = '\0';
	sz += other.sz;
	return *this;
}
std::ostream& operator<<(std::ostream& os, const String& string) {
	os << string.str.get();
	return os;
}
std::istream& operator>>(std::istream& is, String& str) {
	char buffer[4096];  // Temporary buffer
	// Read input into the buffer
	is >> buffer;
	// Assign the buffer contents to the dynamic string
	str = buffer;
	return is;
}
String::operator std::string()
{
	std::string tostring;
	tostring = static_cast<std::string>(this->c_str());
	return tostring;
}


