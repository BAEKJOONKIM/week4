#include <iostream>

using namespace std;


template<class T>
class Array {
protected:
	T *data;
	int len;
public:
	Array<T>();
	Array<T>(int size);
	~Array();

	int length();

	virtual T& operator[](int i);
	T operator[](int i) const;

	void print(void);
};

