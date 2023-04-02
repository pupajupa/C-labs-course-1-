#include "Vector.h"
//vector
template <typename T>
Vector<T>::Vector()
{
	arr = new T[1];
	cap = 1;
	sz=0;
}

template <typename T>
Vector<T>::~Vector() {
	while (sz != 0) {
		pop_back();
	}
	cap = 0;
}

template <typename T>
Vector<T>::Vector(size_t n, const T& value) {
	T* newarr = reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
	while (cap <= n) {
		cap *= 2;
	};//если размер больше чем выделенная память то зарезервировать память
	for (size_t i = sz; i < n; ++i) {
		try {
			new (newarr + i) T(value); //placement new
		}
		catch (...) {
			for (size_t j = 0; j < i; ++j) {
				(newarr + j)->~T();
			}
			delete[] reinterpret_cast<int8_t*>(newarr);
			throw;
		}
	}
	delete[] reinterpret_cast<int8_t*>(arr);
	arr = newarr;
	sz = n;
	cap = n;
}
template <typename T>
Vector<T>::Vector(const Vector<T>& other) : arr(new T[other.sz]), sz(other.sz), cap(other.cap){
	for (size_t i = 0; i < sz; i++)
	{
		arr[i] = other.arr[i];
	}
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
	if (this != &other) //чтобы не присвоить объект самому себе
	{
		T* newarr = new T[other.cap];
		for (size_t i = 0; i < other.sz; i++)
		{
			newarr[i] = other.arr[i];
		}
		delete[] arr;
		arr = newarr;
		sz = other.sz;
		cap = other.cap;
	}
	return *this;
}
template <typename T>
Vector<T>::Vector(Vector<T>&& other) : arr(other.arr), sz(other.sz), cap(other.cap)
{
	other.arr = nullptr;
	other.sz = 1;
	other.cap = 1;
}
template <typename T>
void Vector<T>::insert(const iterator<T>& it, const T& value) {
	++sz;
	size_t ind = it.base() - arr;
	if (sz > cap) {
		cap *= 2;
		T* tmp = arr;
		arr = new T[cap];
		for (size_t i = 0; i < ind; ++i) arr[i] = tmp[i];
		arr[ind] = value;
		for (size_t i = ind + 1; i < sz; ++i)
			arr[i] = tmp[i - 1];
		delete[] tmp;
	}
	else {
		for (size_t i = sz; i > ind; --i) {
			arr[i] = arr[i - 1];
		}
		arr[ind] = value;
	}
}

template <typename T>
size_t Vector<T>::size() const
{
	return sz;
}

template <typename T>
size_t Vector<T>::capacity() const
{
	return cap;
}

template <typename T>
void Vector<T>::reserve(size_t n) {
	if (n <= cap)
		return;
	T* newarr = reinterpret_cast<T*>(new int8_t[n * sizeof(T)]);
	//T*newarr = new T[n] так нельзя
	for (size_t i = 0; i < sz; ++i) {
		try {                        //exception safety
			new (newarr + i) T(arr[i]);//placement new
		}
		catch (...) {
			for (size_t j = 0; j < i; ++j) {
				(newarr + j)->~T(); //явное удлаение элементов
			}
			//delete[] newarr нельзя
			delete[] reinterpret_cast<int8_t*>(newarr);
			throw;
		}
	}
	delete[] reinterpret_cast<int8_t*>(arr);
	arr = newarr;
	cap = n;
}

template <typename T>
void Vector<T>::resize(size_t n, const	T& value) {
	if (n > cap)
		reserve(n);//если размер больше чем выделенная память то зарезервировать память
	size_t i = sz;
	try {
		for (; i < n; ++i) {
			new (arr + i) T(value); //placement new
		}
	}
	catch (...) {
		for (size_t j = 0; j < i; ++j) {
			(arr + i)->~T();//показывает то что элементы удалены
		}
		delete[] reinterpret_cast<int8_t*>(arr);//так как вызывали отдельно конструктор
		throw;
	}
	cap = n;
	if (n < sz)
		sz = n;
}

template <typename T>
void Vector<T>::push_back(T value) {//T значение которое нужно положить в вектор
	if (cap <= sz)
		reserve(2 * sz);
	try {
		new(arr + sz) T(value);//просто new выделяет память под T и сразу инициализирует value а placement new 
		//означает что память уже выделена и мыпросто хотим положить объект типа T по указанному адреса на 
		//месте которого сырая память
		//Вызов конструктора по данному адресу
	}
	catch (...) {
		(arr + sz)->~T(); //явное удлаение элементов
		//деструкторов не такое же количество сколько выделено памяти изза capacity
		delete[] reinterpret_cast<int8_t*>(arr);//компилятор удаляет как обычный тип массив чаров и не вызывает деструкторов
		throw;
	}
	++sz;
	//arr[sz] = value   так нельзя
}

template <typename T>
void Vector<T>::pop_back() {
	--sz;
	(arr + sz)->~T();
}

template <typename T>
bool Vector<T>::empty()const {
	return sz == 0;
}

template <typename T>
T& Vector<T>::operator [](size_t i) {//оператор [] небезопасный
	return arr[i];
}

template <typename T>
T* Vector<T>::at(size_t i) {//тоже самое что и оператор [] только безопасный
	if (i >= sz)
		throw std::out_of_range("...");
	return &arr[i];
}

template <typename T>
void Vector<T>::erase(size_t i) {
	(arr + i)->~T();
	for (size_t j = i; j < sz; ++j) {
		arr[j - 1] = arr[j];
	}
	--sz;
	cap = sz;
}

template <typename T>
T* Vector<T>::front() {
	return &arr[0];
}

template <typename T>
T* Vector<T>::back() {
	return &arr[sz - 1];
}

template <typename T>
void Vector<T>::clear() {
	if (sz < 1)
		return;
	else
	{
		for (size_t i = sz; i > 0; i--)
		{
			(arr + sz)->~T();
			sz--;
		}
	}
}

template <typename T>
void Vector<T>::assign(iterator<T> start, iterator<T> end) {
	sz = 0;
	cap = 1;
	iterator<T> tmp = start;
	while (tmp != end) {
		tmp++;
		++sz;
		if (sz > cap) {
			cap *= 2;
		}
	}
	T* newarr = reinterpret_cast<T*>(new int8_t[sz * sizeof(T)]);
	for (size_t i = 0; start <= end; ++start, ++i) {
		try {                        //exception safety
			new (newarr + i) T(*start);//placement new
		}
		catch (...) {
			for (size_t j = 0; j < i; ++j) {
				(newarr + j)->~T(); //явное удлаение элементов
			}
			//delete[] newarr нельзя
			delete[] reinterpret_cast<int8_t*>(newarr);
			throw std::out_of_range("Iterator out of range");
		}
	}
	arr = newarr;
	cap = sz;
}

template <typename T>
void Vector<T>::swap(Vector<T>& other) {
	T* tmpArr = arr;
	arr = other.arr;
	other.arr = tmpArr;
	size_t tmpSz = sz;
	sz = other.sz;
	other.sz = tmpSz;
	size_t tmpCap = cap;
	cap = other.cap;
	other.cap = tmpCap;
}

template<typename T>
void Vector<T>::emplace(const int& pos, T&& elem) {

	if (pos < 0 || pos > sz) {
		throw std::out_of_range("Invalid position specified");
	}
	if (sz >= cap) {
		if (cap == 0)
			cap = 1;
		else
			cap = cap * 2;
		T* tmp = new T[cap];
		for (int i = 0; i < sz; i++) {
			tmp[i] = std::move(arr[i]);
		}
		delete[] arr;
		arr = tmp;
	}

	for (int i = sz; i > pos; i--) {
		arr[i] = std::move(arr[i - 1]);
	}

	arr[pos] = std::move(elem);
	sz++;
}

template <typename T>
template <typename... Args>
void Vector<T>::emplace_back(Args &&...args)
{
	if (sz == cap)
	{
		reserve(cap * 2);
	}
	new(&arr[sz]) T(std::forward<Args>(args)...);
	++sz;
}

template <typename T>
T* Vector<T>::data() {
	return arr;
}

template <typename T>
size_t Vector<T>::max_size() {
	return pow(2, 64 - sizeof(T)) - 1;
}

//iterator
template <typename T>
T& iterator<T>::operator*() {
	return *ptr;
}
template <typename T>
T* iterator<T>::operator->() {
	return ptr;
}
template <typename T>
iterator<T>& iterator<T>::operator++() {
	++ptr;
	return *this;
}
template <typename T>
iterator<T> iterator<T>::operator++(int) {
	return iterator(ptr++);
}
template <typename T>
iterator<T>& iterator<T>::operator--() {
	--ptr;
	return *this;
}
template <typename T>
iterator<T> iterator<T>::operator--(int) {
	return iterator(ptr--);
}
template <typename T>
T* iterator<T>::base() const {
	return ptr;
}
template <typename T>
bool iterator<T>::operator==(iterator compare) {
	return ptr == compare.base();
}
template <typename T>
bool iterator<T>::operator!=(iterator compare) {
	return ptr != compare.base();
}
template <typename T>
bool iterator<T>::operator<(iterator compare) {
	return ptr < compare.base();
}
template <typename T>
bool iterator<T>::operator>(iterator compare) {
	return ptr > compare.base();
}
template <typename T>
bool iterator<T>::operator<=(iterator compare) {
	return ptr <= compare.base();
}
template <typename T>
bool iterator<T>::operator>=(iterator compare) {
	return ptr >= compare.base();
}
template <typename T>
iterator<T> iterator<T>::operator+(int i) {
	return iterator(ptr + i);
}
template <typename T>
iterator<T> iterator<T>::operator-(int i) {
	return iterator(ptr - i);
}
template <typename T>
bool iterator<T>::operator==(const iterator compare) const {
	return ptr == compare.base();
}
template <typename T>
bool iterator<T>::operator<(const iterator compare) const {
	return ptr < compare.base();
}
template <typename T>
bool iterator<T>::operator>(const iterator compare) const {
	return ptr > compare.base();
}
template <typename T>
bool iterator<T>::operator<=(const iterator compare) const {
	return ptr <= compare.base();
}
template <typename T>
bool iterator<T>::operator>=(const iterator compare) const {
	return ptr >= compare.base();
}
template <typename T>
iterator<T> iterator<T>::operator+(const int i) const {
	return iterator(ptr + i);
}
template <typename T>
iterator<T> iterator<T>::operator-(const int i) const {
	return iterator(ptr - i);
}
template <typename T>
iterator<T>::iterator(T* ptr) :ptr(ptr) {}
template <typename T>
iterator<T>::iterator() { ptr = nullptr; }
template <typename T>




//reverse iterator
reverse_iterator<T>::reverse_iterator(T* ptr) : ptr(ptr) {}
template <typename T>
reverse_iterator<T>::reverse_iterator() { ptr = nullptr; }
template <typename T>
T& reverse_iterator<T>::operator*() {
	return *ptr;
}
template <typename T>
T* reverse_iterator<T>::operator->() {
	return ptr;
}
template <typename T>
reverse_iterator<T>& reverse_iterator<T>::operator++() {
	--ptr;
	return *this;
}
template <typename T>
reverse_iterator<T> reverse_iterator<T>::operator++(int) {
	return reverse_iterator(ptr--);
}
template <typename T>
reverse_iterator<T>& reverse_iterator<T>::operator--() {
	++ptr;
	return *this;
}
template <typename T>
reverse_iterator<T> reverse_iterator<T>::operator--(int) {
	return reverse_iterator(ptr++);
}
template <typename T>
T* reverse_iterator<T>::base() const {
	return ptr;
}
template <typename T>
bool reverse_iterator<T>::operator==(reverse_iterator compare) {
	return ptr == compare.base();
}
template <typename T>
bool reverse_iterator<T>::operator!=(reverse_iterator compare) {
	return ptr != compare.base();
}
template <typename T>
bool reverse_iterator<T>::operator<(reverse_iterator compare) {
	return ptr < compare.base();
}
template <typename T>
bool reverse_iterator<T>::operator>(reverse_iterator compare) {
	return ptr > compare.base();
}
template <typename T>
bool reverse_iterator<T>::operator<=(reverse_iterator compare) {
	return ptr <= compare.base();
}
template <typename T>
bool reverse_iterator<T>::operator>=(reverse_iterator compare) {
	return ptr >= compare.base();
}
template <typename T>
reverse_iterator<T> reverse_iterator<T>::operator+(int i) {
	return reverse_iterator(ptr + i);
}
template <typename T>
reverse_iterator<T> reverse_iterator<T>::operator-(int i) {
	return reverse_iterator(ptr - i);
}