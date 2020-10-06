#include"GrowableArray.h"

template<class T>
GrowableArray<T>::GrowableArray() :Array<T>() {

};

template<class T>
GrowableArray<T>::GrowableArray(int size) : Array<T>(size) {

};

template<class T>
GrowableArray<T>::~GrowableArray() {

};

template<class T>
T& GrowableArray<T>::operator[](int i) {
	if (i >= this->len) {
		int j;
		T *temp = new T[(this->len) * 2];
		for (j = 0; j < this->len; j++) {
			temp[j] = this->data[j];
		}
		for (j = this->len; j < this->len * 2; j++) {
			temp[j] = 0;
		}
		this->len = this->len * 2;

		this->data = temp;

		return this->data[i];

	}
	else if (i < 0) {
		cout << "Array bound error\n";
	}
	else {
		return this->data[i];
	}
};