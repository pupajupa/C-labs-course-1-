#include <iostream>

class unique_ptr {
private:
	char* ptr;
public:
	unique_ptr(): ptr(nullptr) {}
	unique_ptr(char* ptr) :ptr(ptr) {}
	~unique_ptr() {
		delete ptr;
	}
	unique_ptr(const unique_ptr& x) = delete;
	unique_ptr& operator=(unique_ptr& a) = delete;
	unique_ptr(unique_ptr&& another) noexcept : ptr(another.ptr) {
		another.ptr = nullptr;
	}
	unique_ptr& operator = (unique_ptr&& another) noexcept{
		if (&another == this)
			return *this;
		delete ptr;
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

class String {
private:
	unique_ptr str;
	size_t sz;
	size_t cap;
public:
	String() {
		sz = 0;
		cap = 1;
		str = new char[cap];
		str.get()[0] = '\0';
	}
	String(char* string) {
		sz = strlen(string);
		str = new char(sz + 1);
		strcpy(str.get(), string);
		cap = sz + 1;
	}
	String& operator=(const char* str)
	{
		size_t buf = 0;
		while (str[buf])
		{
			buf++;
		}

		this->str = new char[buf + 1];
		for (size_t i = 0; i < buf; i++)
		{
			this->str.get()[i] = str[i];
		}
		this->str.get()[buf] = '\0';
		sz = buf;
		sz = buf;
		return *this;
	}
	~String()
	{
		sz = 0;
		cap = 0;
		str = nullptr;
	}
	String& operator=(const String& other) {
		if (this != &other) {
			sz = other.sz;
			str = new char(sz + 1);
			strcpy(str.get(), other.str.get());
		}
		cap = sz + 1;
		return *this;
	}
	char& operator[](size_t i) {
		return str.get()[i];
	}
	char* at(size_t i) {//тоже самое что и оператор [] только безопасный
		if (i >= sz)
			throw strerror(12);
		return &str.get()[i];
	}

	size_t strlen(const char* s) {
		size_t length = 0;
		while (s[length] != '\0') {
			length++;
		}
		return length;
	}
	size_t strnlen(const char* s, size_t n) {
		size_t length = 0;
		while (length < n && s[length] != '\0') {
			++length;
		}
		return length;
	}
	size_t size()const {
		return sz;
	}
	char* strcpy(char* s1, const char* s2) {
		int i = 0;
		while (s2[i] != '\0') {
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
		return s1;
	}
	char* strncpy(char* s1, const char* s2, size_t n) {
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
	char* strcat(char* s1, const char* s2) {
		int s1Length = strlen(s1);
		int i;
		for (i = 0; s2[i] != '\0'; i++) {
			s1[s1Length + i] = s2[i];
		}
		s1[s1Length + i] = '\0';
		sz = s1Length + i - 1;
		cap = sz + 1;
		return s1;
	}
	char* strncat(char* s1, const char* s2, size_t n) {
		size_t s1Length = strlen(s1);
		size_t s2Length = strnlen(s2, n); // get length of s2, up to n characters
		// copy s2 to end of s1
		for (size_t i = 0; i < s2Length; i++) {
			s1[s1Length + i] = s2[i];
		}
		// add null terminator
		s1[s1Length + s2Length] = '\0';
		return s1;
	}
	int strcmp(const char* s1, const char* s2) {
		int i = 0;
		while (s1[i] == s2[i]) {
			if (s1[i] == '\0') {
				return 0;
			}
			i++;
		}
		return s1[i] - s2[i];
	}
	int strncmp(const char* s1, const char* s2, size_t n) {
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
	int memcmp(const void* s1, const void* s2, size_t n) {
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
	int strcoll(const char* s1, const char* s2) {
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
	size_t strxfrm(char* s1, const char* s2, size_t n) {
		size_t length = strlen(s2); // вычисляем длину s2
		if (length < n) {
			memcpy(s1, s2, length + 1); // копируем s2 в s1 с завершающим нулем
		}
		else if (n > 0) {
			memcpy(s1, s2, n - 1); // копируем n-1 символов из s2 в s1
			s1[n - 1] = '\0'; // добавляем завершающий нуль
		}
		return length; // возвращаем длину s2
	}
	void* memset(void* s, int c, size_t n) {
		unsigned char* p = static_cast<unsigned char*>(s);
		unsigned char ch = static_cast<unsigned char>(c);
		for (size_t i = 0; i < n; i++) {
			p[i] = ch;
		}
		return s;
	}
	void* memcpy(void* s1, const void* s2, size_t n) {
		// Приводим указатели к типу unsigned char*, чтобы копировать байты
		unsigned char* first = static_cast<unsigned char*>(s1);
		const unsigned char* sec = static_cast<const unsigned char*>(s2);
		// Копируем n байт из s2 в s1
		for (size_t i = 0; i < n; i++) {
			first[i] = sec[i];
		}
		return s1;
	}
	void* memmove(void* s1, const void* s2, size_t n) {
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
	const char* strerror(int errnum) {
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
	char* mystrtok(char* s1, const char* s2)
	{
		static char* last = 0;
		if (s1)
			last = s1;
		if ((last == 0) || (*last == 0))
			return 0;
		char* c = last;
		while (strchr(s2, *c))
			++c;
		if (*c == 0)
			return 0;
		char* start = c;
		while (*c && (strchr(s2, *c) == 0))
			++c;
		if (*c == 0) {
			last = c;
			return start;
		}
		*c = 0;
		last = c + 1;
		return start;
	}
	char* strchr(const char* s, int ch) {
		while (*s) {
			if (*s == ch) {
				return (char*)s;
			}
			s++;
		}
		// Если символ ch не найден, возвращаем NULL
		return NULL;
	}
	bool operator==(const char* s) const {
		return str.get() == s;
	}

	bool operator==(const String& other) const {
		return str.get() == other.str.get();
	}

	bool operator!=(const char* s) const {
		return str.get() != s;
	}

	bool operator!=(const String& other) const {
		return str.get() != other.str.get();
	}

	bool operator<(const char* s) const {
		return str.get() < s;
	}

	bool operator<(const String& other) const {
		return str.get() < other.str.get();
	}
	bool operator>(const char* s) const {
		return str.get() > s;
	}

	bool operator>(const String& other) const {
		return str.get() > other.str.get();
	}
	bool empty()const {
		return sz == 0;
	}
	char* c_str() {
		return str.get();
	}
	friend std::ostream& operator<<(std::ostream& os, const String& string) {
		 os << string.str.get();
		 return os;
	}
	friend std::istream& operator>>(std::istream& is, String& str) {
		char buffer[4096];  // Temporary buffer for reading input
		// Read input into the buffer
		is >> buffer;
		// Assign the buffer contents to the dynamic string
		str = buffer;
		return is;
	}
};

int main() {
	String str,buf;;
	std::string a;
	a = str.mystrtok(str, " ");
	std::cout << a;
}