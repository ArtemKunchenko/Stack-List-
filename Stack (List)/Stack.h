#pragma once
#include "List.h"

template<class T>
class Stack
{
public:
	Stack(int capacity);
	~Stack();
	bool empty();//Tests if the stack is empty.
	void pop();//Removes the element from the top of the stack.
	void push(T item);//Adds an element to the top of the stack.
	int size();//Returns the number of elements in the stack.
	T& top();//Returns a reference to an element at the top of the stack.
	T& getData(int index);//returns element of index
	int getCapacity();//returns size of capacity
	void print();//outputs all elements in the stack
private:
	List<T>* _data;
	int _capacity;

};
