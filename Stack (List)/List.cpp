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
	clear();
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
void List<T>::pushFront(T data)
{
	_head = new Node<T>(data, _head);
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
void List<T>::insert(T data, int index)
{
	if (index == 0) pushFront(data);
	else
	{
		Node<T>* previous = this->_head;
		for (int i = 0; i < index-1; i++) previous = previous->_next;
		Node <T>* new_node = new Node<T>(data, previous->_next);
		previous->_next = new_node;
		_size++;
	}
}

template<class T>
void List<T>::clear()
{
	while (_size != 0) popFront();
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

