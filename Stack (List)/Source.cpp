#include<iostream>
#include "List.h"
#include "List.cpp"
using namespace std;

int main()
{
	List<int> ex;
	ex.pushBack(1);
	ex.pushBack(2);
	ex.pushBack(4);
	for (int i = 0; i < ex.getSize(); i++)
	{
		cout << ex[i] << "  ";
	}
	cout <<"The are "<<ex.getSize()<<" elements" << endl;
	ex.insert(9, 2);
	for (int i = 0; i < ex.getSize(); i++)
	{
		cout << ex[i] << "  ";
	}
	cout << "The are " << ex.getSize() << " elements" << endl;
	system("pause");
	return 0;
}