
#ifndef HASHTABLE_H
#define HASHTABLE_H



#include<vector>
#include<algorithm>
#include <forward_list>
#include <functional>
#include <iterator>
template<typename KeyType, typename ValueType, typename Hash = std::hash<KeyType>> //3 - хеш-функция
class HashTable
{
private:
	using Entry = std::pair<const KeyType, ValueType>;
	using Bucket = std::forward_list<Entry>; //Каждый бакет хранит элементы с одинаковым хэшем.
	static const size_t DEFAULT_SIZE = 10;
	Hash hash; //объект хэш-функции, который будет использоваться для вычисления хэшей ключей элементов
	size_t size;
	std::vector<Bucket> buckets; //каждый бакет является связным списком элементов с одинаковым хэшем
	size_t getBucketIndex(const KeyType& key) const //индекс бакета для заданного ключа
	{
		return hash(key) % buckets.size(); //ключи с одинаковым хэшем будут попадать в один бакет.
	}
	typename Bucket::iterator findEntry( Bucket& bucket, const KeyType& key) const //поиск элемента с заданным ключом (key) в заданном бакете (bucket).
	{ //std::find_if, который применяет предикат (лямбда-функцию) к каждому элементу бакета, чтобы проверить, равен ли ключ элемента искомому ключу
		return std::find_if(bucket.begin(), bucket.end(), [&key]( Entry& entry) {return entry.first == key;});
	}//Если элемент с заданным ключом найден, функция возвращает итератор на него; в противном случае возвращается итератор на конец бакета.
public:
	const std::vector<Bucket>& getBuckets() const
	{
		return buckets;
	}
	explicit HashTable(size_t initialSize = DEFAULT_SIZE) : size(0)
	{
		buckets.resize(initialSize);
	}
	bool contains(const KeyType& key) const
	{
		size_t index = getBucketIndex(key);
		const Bucket& bucket = buckets[index];
		for (const auto& entry : bucket)
		{
			if (entry.first == key)
			{
				return true;
			}
		}
		return false;
	}
	ValueType& operator[](const KeyType& key)
	{
		size_t index = getBucketIndex(key);
		Bucket& bucket = buckets[index];
		typename Bucket::iterator it = findEntry(bucket, key);
		if(it != bucket.end())
		{
			return it->second;
		}
		else
		{
			bucket.emplace_front(key, ValueType()); //если элемент отсутствует по заданному ключу, то он создается, используя конструктор по умолчанию ValueType()
			++size;
			if(size > buckets.size())
			{
				rehash();
				index = getBucketIndex(key);
			}
			return bucket.front().second;
		}
	}
	ValueType operator[](const KeyType& key) const
	{
		size_t index = getBucketIndex(key);
		const Bucket & bucket = buckets[index];
		typename Bucket::const_iterator it = findEntry(bucket, key);
		if(it != bucket.end())
		{
			return it->second;
		}
		else
		{
			return ValueType();
		}
	}
	void insert(const KeyType& key, const ValueType& value)
	{
		size_t index = getBucketIndex(key);
		Bucket& bucket = buckets[index];
		typename Bucket::iterator it = findEntry(bucket, key);
		if(it != bucket.end())
		{
			it->second = value; //Если элемент с заданным ключом уже существует в хэш-таблице (итератор it не указывает на конец бакета), то его значение обновляется
		}
		else //Если элемент с заданным ключом не найден, то происходит вставка нового элемента в начало бакета
		{
			bucket.emplace_front(key, value);
			++size;
			if(size > buckets.size())
			{
				rehash();
			}
		}
	}
	void erase(const KeyType& key)
	{
		size_t index = getBucketIndex(key);
		Bucket& bucket = buckets[index];
		typename Bucket::iterator prevIt = bucket.before_begin(); //указывающий на элемент перед искомым элементом в бакете. Начальное значение итератора устанавливается на позицию перед началом бакета.
		typename Bucket::iterator it = findEntry(bucket, key);
		if (it != bucket.end())
		{
			while (std::next(prevIt) != it) //Поиск итератора prevIt, указывающего на элемент перед искомым элементом it в связном списке бакета. Цикл выполняется, пока prevIt не будет указывать на элемент перед it.
			{
				++prevIt;
			}
			bucket.erase_after(prevIt); //удаления элемента, следующего за prevIt, из связного списка бакета
			--size;
		}
	}
	void clear()
	{
		for(Bucket& bucket : buckets)
		{
			bucket.clear();
		}
		size = 0;
	}
	void rehash()
	{
		size_t newSize = buckets.size() * 2;
		std::vector<Bucket> newBuckets(newSize);
		for(const Bucket& bucket : buckets)
		{
			for(const Entry& entry : bucket)
			{
				size_t index = hash(entry.first) % newSize; //Вычисляется новый индекс index в новых бакетах
				newBuckets[index].emplace_front(entry); //Элемент entry добавляется в начало соответствующего нового бакета newBuckets[index] с помощью функции emplace_front, чтобы сохранить порядок элементов внутри бакета.
			}
		}
		buckets = std::move(newBuckets); //Старый вектор бакетов buckets заменяется новым вектором newBuckets
	}
};

#endif // HASHTABLE_H
