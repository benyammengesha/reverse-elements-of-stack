 
//PREPARED BY BENYAM MENGESHA
#include <iostream>
#include "linkedStackType.h"
 
int main(){
	//declaring four stack objects   
	linkedStackType<int> stack1;
	linkedStackType<int> stack2;
	linkedStackType<int> copyStack;
	linkedStackType<int> tempStack;
	//Intialize stack1 and stack2
	stack1.initializeStack();
	stack2.initializeStack();
	//Inserting three elements in the stack1
	stack1.push(23);
	stack1.push(45);
	stack1.push(58);
	//Intialize tempStack variable to copy the items of stack1
	//and printing the values
	tempStack.initializeStack();
	tempStack = stack1;
	cout << "the elements of the stack1" << endl;
	while (!tempStack.isEmptyStack()){
		cout << tempStack.top() << " ";
		tempStack.pop();
	}
	//Revese function is called to copy stack1 elements in stack2 in revese order
	stack1.reverseStack(stack2);
	copyStack = stack2;
	cout << endl;
	//printing out the values of  Stack2  using of copyStack
	//we use copyStack to keep the elements of stack2 
	cout << "the elements of the stack2" << endl;
	while (!copyStack.isEmptyStack()){
		cout << copyStack.top() << " ";
		copyStack.pop();
	}
	cout << endl;
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}
