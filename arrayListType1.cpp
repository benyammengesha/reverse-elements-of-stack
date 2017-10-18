#include <iostream>
#include <cassert>
#include"arrayListType1.h"
#include <cassert>
#include"string"
#include<conio.h>

using namespace std;

int main()

{
	arrayListType<int> list(10);
	int number, counter;

	cout << "    Enter five integers: " << endl;

	for(counter = 0; counter<5; counter++)
	{
		cin >> number;

		list.insertAt(counter, number);

	}
	cout << "    Enter five integers: " << endl;
	cout << "the list you have put in the system is as follows" << endl;
	list.print();
	cout << "please enter the  number to be removed from the list" << endl;

	cin>> counter;
	list.removeAll(counter);
	list.print();
	list.clearList();
	//HOLDS THE SCREEN PAUSE IN VISUAL STUDIO
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}
