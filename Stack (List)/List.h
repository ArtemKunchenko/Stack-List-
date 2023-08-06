#pragma once
#include<iostream>
using namespace std;

template<class T>
class List
{
public:
	List();//constructor default
	~List();//distructor
	void pushBack(T data);//adds an element to the end of the List
	void pushFront(T data);//adds an element to the begining of the List
	void popFront();//deletes the first element from a List
	void popBack();//deletes the last element from a List
	void insert(T data, int index);//iserts an element in the particular place
	void removeAt(int index);//deletes an element from the particular place
	void clear();///deletes all elements in a List
	int getSize();//returns a size of list
	T& operator[](const int index);//overloads operator []

private:
#pragma region CLASS NODE
	template<class T>
	class Node
	{
	public:
		Node(T data = T(), Node* next = nullptr)
		{
			_data = data;
			_next = next;
		}
		Node* _next;
		T _data;
	};
#pragma endregion

	Node<T> *_head;
	int _size;
};

