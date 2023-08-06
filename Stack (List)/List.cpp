#include "List.h"

template<class T>
inline List<T>::List()
{
	_size = 0;
	_head = nullptr;
}

template<class T>
List<T>::~List()
{
}

template<class T>
void List<T>::pushBack(T data)
{
	if (_head == nullptr) _head = new Node<T>(data);
	else
	{
		Node<T>* temp = _head;
		while (temp->_next != nullptr) temp = temp->_next;
		temp->_next= new Node<T>(data);
		
	}
	_size++;
}

template<class T>
void List<T>::popFront()
{
	Node <T> *temp = _head;
	_head = _head->_next;
	delete temp;
	_size--;
}

template<class T>
int List<T>::getSize() { return _size; }

template<class T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* temp = _head;
	while (temp != nullptr)
	{
		if (counter == index) return temp->_data;
		temp = temp->_next;
		counter++;
	}
}

