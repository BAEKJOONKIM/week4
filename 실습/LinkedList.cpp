#include<iostream>

using namespace std;

template <class T>
class Node {
public:
	T data;
	Node<T> *link;
	
	Node(T element) {
		this->data = element;
		this->link = 0;
	}
};

template<class T>
class LinkedList{
protected:
	Node<T> *first;
	int current_size;

public:
	LinkedList<T>() {
		this->first = 0;
		this->current_size = 0;
	}
	
	int GetSize() {
		return this->current_size;
	}
	void Insert(T element);
	virtual bool Delete(T& element);
	void Print();

};

template<class T>
void LinkedList<T>::Insert(T element) {
	Node<T> *newnode = new Node<T>(element);
	newnode->link = this->first;
	this->first = newnode;
	this->current_size++;
}

template<class T>
bool LinkedList<T>::Delete(T& element) {
	if (this->first == 0) return false;

	Node<T> *current = this->first, *previous = 0;
	while (1) {
		if (current->link == 0) {
			if (previous) previous->link = current->link;
			else this->first = this->first->link;
			break;
		}
		previous = current;
		current = current->link;
	}
	element = current->data;
	delete current;
	this->current_size--;
	return true;
}

template<class T>
void LinkedList<T>::Print() {
	if (this->first != 0) {
		Node<T> *current = this->first;
		int i;
		for (i = 0; i < this->current_size; i++) {
			cout << "[" << i+1 << "|" << current->data << "]";
			if (current->link != 0) cout << "->";
			current = current->link;
		}
		cout << endl;
	}
}











