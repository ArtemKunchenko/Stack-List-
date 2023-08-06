#include "Stack.h"

template<class T>
inline Stack<T>::Stack(int capacity)
{
	_data = new List<T>();
	_capacity = capacity;
}

template<class T>
Stack<T>::~Stack()
{
	_data->clear();
}

template<class T>
bool Stack<T>::empty()
{
	if (_data->getSize() == 0) return true;
	else return false;
}
template<class T>
void Stack<T>::pop()
{
	if(_data->getSize()!=0)_data->popBack();
}
template<class T>
void Stack<T>::push(T item)
{
	if (_capacity > _data->getSize()) _data->pushBack(item);
	else cout << "Stack overflow\n";
}
template<class T>
int Stack<T>::size()
{
	return _data->getSize();
}
template<class T>
T& Stack<T>::top()
{
	return getData(size() - 1);
}
template<class T>
T& Stack<T>::getData(int index)
{
	return _data->getData(index);
}

template<class T>
int Stack<T>::getCapacity()
{
	return _capacity;
}

template<class T>
void Stack<T>::print()
{
	for (int i = 0; i < _data->getSize(); i++)
	{
		cout << _data->getData(i)<<"  ";
	}
	cout << endl;
}

