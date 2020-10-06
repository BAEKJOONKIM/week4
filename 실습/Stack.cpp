#include<iostream>

#include"LinkedList.cpp"

using namespace std;


template<class T>
class Stack : public LinkedList<T>{
public:
	virtual bool Delete(T& element);
};

template<class T>
bool Stack<T>::Delete(T& element) {
	if (this->first == 0) return false;

	Node<T> *current = this->first, *next = 0;

	element = current->data;
	next = current->link;
	delete current;
	this->first = next;
	this->current_size--;
	return true;
}
