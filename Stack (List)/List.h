#pragma once
#include<iostream>
using namespace std;

template<class T>
class List
{
public:
	List();//constructor default
	~List();//distructor
	void pushBack(T data);//adds an element to the end of the list

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

