#include "Array.h"

template<class T>
Array<T>::Array() {

};

template<class T>
Array<T>::Array(int size) {
	data = new T[size];
	len = size;
};
template<class T>
Array<T>::~Array() {

};

template<class T>
int Array<T>::length() {
	return len;
};

template<class T>
T& Array<T>::operator[](int i) {
	if (i < 0 || i >= len) { cout << "Array bound error\n"; }
	return data[i];
};

template<class T>
T Array<T>::operator[](int i)const {
	return data[i];
};

template<class T>
void Array<T> ::print() {
	int i;

	cout << "[";
	for (i = 0; i < len; i++) {
		cout << " " << data[i];
	}
	cout << " ]\n";
};