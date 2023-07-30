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
}
