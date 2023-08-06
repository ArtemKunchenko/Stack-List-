#include<iostream>
#include "List.h"
#include "List.cpp"
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

int main()
{
	Stack<int> ex(4);
	cout<<"Is empty: " << ex.empty() << endl;
	ex.push(1);
	ex.push(2);
	ex.push(4);
	ex.push(8);
	ex.print();
	ex.push(16);
	ex.print();
	ex.pop();
	ex.print();
	cout << "Is empty: " << ex.empty() << endl;
	cout << "Top element: " << ex.top() << endl;
	system("pause");
	return 0;
}