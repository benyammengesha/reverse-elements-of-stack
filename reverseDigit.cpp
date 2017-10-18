 
//PREPARED BY BENYAM MENGESHA
// A RECURSIVE PROGRAM THAT PRINT THE REVERSE OF AN INTEGER NUMBER
#include <iostream>
#include <math.h>

using namespace std;
//FUNCTION DEFINITION OF THE RECURSIVE FUNCTION
//THE FUNCTION HAS A PARAMETER OF INTEGER AND OUTPUT THE REVESE OF THE INPUT
void reverseDigits(int number){
	 
// THE BASE CASE OF THE FUNCTION 	
if (number == 0)
return ;
//CHECKS WHETHER THE NUMBER IS NEGATIVE  OR NOT 
//FOR NEGATIVE NUMBER TAKE ABSOLUTE VALUE OF MODE DIVISION BY NEGATIVE TEN 
//IT PRINT OUT FIRST THE LAST DIGIT OF THE NUMBER 
//CONCATINATE THE OUTPUT WITH  MINUS SIGN FOR NEGATIVE NUMBERS
else if (number < 0){
	cout << "-"<<abs( number%-10);
	return reverseDigits(number / -10);
}
//FUNCTION CALL FOR POSITIVE NUMBERS
else {
	cout << number % 10;

	return reverseDigits(number / 10);
}

}


int main(){
	int num;
	cout << "enter a number" << endl;
	//ACCEPTS INPUT FRON THE USER AND PUT IT IN VARIABLE
	cin >> num;
	//CALL THE RECURSIVE FUNCTION PASSING THE INPUT
	cout << "THE REVERSE OF THE NUMBER: " << endl;
    reverseDigits(num);
	 
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}
 
