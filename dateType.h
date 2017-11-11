// PREPARED BY BENYAM MENGESHA
#pragma once
#include <iostream>
#include <string>
using namespace std;

class dateType
{
private: 
	int month, day, year;
public:
	dateType();
	~dateType();
	//void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getMonth();
	int getDay();
	int getYear();
	void print();
	bool isLeapYear(int);
	int passedDays(int,int,int);
	int daysRemaining(int, int, int);


};
void dateType::setDay(int d){
	if (d <= 1 && d <= 31)
		switch (month){
		case 1:

		case 3:

		case 5:

		case 7:

		case 8:

		case 10:

		case 12:
			day = d;
		case 2:
			if (isLeapYear(year) && d <= 29)
				day = d;
			else
				cout << "wrong input" << endl;
			day = 0;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d <= 30)
				day = d;
			else
				cout << "WRONG INPUT" << endl;
			day = 0;

	}
}
void dateType::setMonth(int m){
		if (1 <= m && m <= 12)
			month = m;
		else
			cout << "wrong month" << endl;
		month = 0;
	
	}
void dateType::setYear(int y){
		if (y >= 1)
			year = y;
		else
			cout << "wrong year" << endl;
	}


	bool dateType::isLeapYear(int y){
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			return true;
		else
			return false;

	}
	int  dateType::getMonth(){

		return month;
	}

	int  dateType::getDay(){

		return day;
	}
	int  dateType::getYear(){

		return year;
	}
	int dateType::passedDays(int m, int d, int y){
		int count = 0;
		int monthIndex = m - 1;
		int i = 0;
		int noDays[11] = { 31, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int f1 = 28;
		int f2 = 29;
		if (m < 2)
			return d;
		if (m == 2)
			return d + 31;
		else 

			while (monthIndex--)
			{
				count += noDays[i];
				i++;

			}
			if (isLeapYear(y))
				return count + f2 + d;
			else
				return count + f1 + d;
	}

	int dateType::daysRemaining(int m, int d, int y){

		if (isLeapYear(y))
			return 366 - passedDays(m, d, y);
		else
			return 365 - passedDays(m, d, y);
		
	}
	dateType::dateType(){
		 

	}
	dateType::~dateType(){


	}
