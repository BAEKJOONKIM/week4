#include<iostream>
#include "Array.cpp"


using namespace std;

template<class T>
class GrowableArray : public Array<T> {
public:
	GrowableArray<T>();
	GrowableArray<T>(int size);
	~GrowableArray();
	virtual T& operator[](int i);
};
