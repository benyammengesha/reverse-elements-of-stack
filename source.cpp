
#include "romanType.h"
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
	int input;
	string romanNumber;
	romanType aRomanInput;

	cout << "A PROGRAM THAT CHANGE ROMAN NUMBER TO DECIMAL NUMBER " << endl;

	cout << "REFER THE ROMAN NUMBERS AS INPUT DATA \n";
	cout << "  M = 1000\n";
	cout << "  D = 500\n";
	cout << "  C = 100\n";
	cout << "  L = 50\n";
	cout << "  X = 10\n";
	cout << "  V = 5\n";
	cout << "  I = 1\n";
	cout << "please enter a positive decimal number less than 4000" << endl;
	cin >> input;
	cout << "PLEASE ENTER A ROMAN NUMBER \n";

	cin >> romanNumber;

	cout << "the roman form of the decimal you enter is " << aRomanInput.decimalToRoman(input) << endl;

	aRomanInput.setRoman(romanNumber);

	aRomanInput.printRoman();

	aRomanInput.calculateDecimal();
	aRomanInput.printDecimal();

	//HOLDS VISUAL STUDIO SCREEN AFTER OUTPUT
 
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}