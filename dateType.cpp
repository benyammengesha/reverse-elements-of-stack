#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	int dayInput, monthInput, yearInput;
	dateType ddDate;
	cout << "PLEASE ENTER THE DATE OF THE DAY" << endl;
	cout << "THE SYSTEM ACCEPTS INPUT OF NUMBER FROM 1 TO 31 ONLY" << endl;
	cin >>dayInput;
	ddDate.setDay(dayInput);
	cout << "PLEASE ENTER THE MONTH OF THE DAY" << endl;
	cout << "THE SYSTEM ACCEPTS INPUT OF NUMBER FROM 1 TO 12 ONLY" << endl;
	cin >> monthInput;
	ddDate.setMonth(monthInput);
	cout << "PLEASE ENTER THE YEAR " << endl;
	cout << "THE SYSTEM ACCEPTS INPUT OF NUMBER" << endl;
	cin >> yearInput;
	ddDate.setDay(yearInput);
	cout << "THE DATE YOU ENTERED IS" << endl;
	cout << ddDate.getMonth() << "-" << ddDate.getDay() << "-"<<ddDate.getYear() << endl;
	cout << "TOTAL DAYS PASSED" << ddDate.passedDays(dayInput, monthInput, yearInput) << endl;
	cout << "TOTAL DAYS REMAINING" << ddDate.daysRemaining(dayInput, monthInput, yearInput) << endl;
		cin.get();

		return 0;
}
