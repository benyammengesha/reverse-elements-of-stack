 
#include <iostream>
#include <cassert>
 
using namespace std;


void reverseDigits(int number){
	if (number == 0 )  
		return ;
	else{
		if (number % 10) < 0
			num = -num;
			cout << number % 10;
		else
			cout << number % 10;
		reverseDigits  (number / 10);  
		
	}
}
int main(){
	int num,x;
	cout << "enter a number" << endl;
	cin >> num;
	 
	  reverseDigits(num);
	 
	 
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}