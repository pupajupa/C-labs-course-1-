#ifndef PAIR_H
#define PAIR_H

template<typename T1,typename T2>
struct pair{
public:
	T1 first{};
	T2 second{};
	pair() : first(), second(){}
	pair(const T1& x,const T2& y) : first(x), second(y){};
//	pair(const pair<T1, T2>& p)
//	: first(p.first), second(p.second) {};
//	void operator=(const pair& other){
//		first = other.first;
//		second = other.second;
//	}
};
#endif // PAIR_H
