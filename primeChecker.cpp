  //a function that check whether an integer number is prime or not 
#include <iostream>
#include <math.h>

using namespace std;
 
bool primeChecker(int number,int i=2){
	 
	if (number == i)
		return 1;
	 
	if  (number % i  == 0)
		 
		return  0;
	else
 
	 return primeChecker( number,i++ );
	

}


int main(){
	int num;
	cout << "enter a number" << endl;
	 
	cin >> num;
	 bool x=primeChecker(num);
	 if (x)
		 cout << "the number is prime" << endl;
	 else
		 cout << "the number is not prime" << endl;

	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}
