//PREPARED BY BENYAM MENGESHA    
//ID 2139489
//A PROGRAM THAT ACCEPTS A ROMAN NUMBER and DIPLAY  DECIMAL NUMBER OR ROMAN NUMBER

#include<iostream>
#include<string>
using namespace std;
class romanType

{
private:
	string roman;
	int decimal;

public:
	//DEFAULT CONSTRUCTOR AND DESTRUCTOR 
	 
	romanType();
	~romanType();
	

	
	//SET THE ROMAN VALUE IN THE PUBLIC VARIABLE 
	void setRoman(string& roman);

	//RETURN THE VALUE OF THE PUBLIC ROMAN  VARIABLE 
	string getRoman();

	//PRINT THE VALUE OF THE ROMAN VARIABLE TO THE USER
	void printRoman();
	
	//THIS FUNCTION CHANGE THE VAULE OF THE ROMAN AND PRODUCE THE VALUE OF ITS EQUALVENT DECIMAL NUMER
	void printDecimal();
	string decimalToRoman(int decimal);
	void calculateDecimal();
};

//THIS FUNCTION FIRST CHECK IF THE INPUT OF THE USER IS ROMAN NO OR NOT AND ACCEPT IT AFTER CHANGING TO UPPER CASE
//SET THE  ROMAN AS THE INPUT DATA OR IF THE INPUT IS WRONG INDICATE AS WRONG INPUT AND SET ROMAN TO NULL

void romanType::setRoman(string &R){
	int  n = R.length();
	 
	for (int i = 0; i < n; i++){
		R[i] = toupper(R[i]);
	}
	roman = R;
}
string romanType::getRoman(){
	return roman;

}
//THIS FUNCTION ADDS THE DIGITS OF THE ROMAN NO AFTER CHANGING TO DECIMAL AND PRINT TO THE USER 

void romanType::printDecimal(){
	cout << "THE NUMBER YOU ENTERED CHANEGED TO DECIMAL IS  " << decimal << endl;
}
void romanType::calculateDecimal(){
	string rm = "MDCLXVI";
	int num[7] = { 1000, 500, 100, 50, 10, 5, 1 };
	int temp[10] = { 0 };
	//CHANGING THE ROMANS TO DECIMAL NUMBERS 
	int sum = 0;
	int count = roman.length();
	for (int i = 0; i < count; i++){
		for (int j = 0; j < 7; j++){
			if (roman[i] == rm[j]){
				temp[i] = num[j];
				break;
			}
		}


	}
	
	//CHECKING EACH ROMANS DIGITS IF THEY ARE LOWER THAN THE NEXT AND SUBTRUCT IF IT IS LESS THAN THE NEXT DIGIT

	for (int i = 0; i < count; i++){

		if (temp[i + 1] > temp[i] && temp[i + 1] == 1000){

			sum = temp[i + 1] - (temp[i] + sum);
			i++;
		}

		else if (temp[i + 1] > temp[i] && temp[i + 1] == 500){

			sum = temp[i + 1] - (temp[i] + sum);
			i++;
		}
		else if (temp[i + 1] > temp[i] && temp[i + 1] == 100){

			sum = temp[i + 1] - (temp[i] + sum);
			i++;
		}
		else if (temp[i + 1] > temp[i] && temp[i + 1] == 50){

			sum = temp[i + 1] - (temp[i] + sum);
			i++;
		}
		else if (temp[i + 1] > temp[i] && temp[i + 1] == 10){

			sum = temp[i + 1] - (temp[i] + sum);
			i++;
		}
		else if (temp[i + 1] > temp[i]){
			sum += temp[i + 1] - temp[i];
			i++;}
		else
			sum += temp[i];
	}
	decimal = sum;//ASSIGNING THE SUM OF THE DIGITS TO PRIVATE CLASS MEMEBER

}

void romanType::printRoman(){
	cout <<"THE ROMAN NUMBER IS    "<< roman << endl;
}
string romanType::decimalToRoman(int dec){
	int temp = dec;
	int n;
	string temRoman;
	if (temp >= 4000 || temp <= 0){
		cout << "Please enter positive number not more than 4000" << endl;
		return "";
	}

	//get the first digit of the input if it is thousands
	else {
		if (temp >= 1000)
		{
			n = temp / 1000;

			//changing the decimal to roman; the first thoudandths digit

			for (int i = 0; i < n; i++){
				temRoman += 'M';
			}
			temp %= 1000;     //check and get handred digit of the number
		}
		//changing the handreds decimal to Romans
		//xyz digitd are calculated here


		if (temp >= 100){
			n = temp / 100;
			if (n == 9){
				temRoman += "CM";
			}

			else if (n >= 5)  { //checking for decimal 800,700,600,...
				temRoman += "D";
				for (int i = 0; i < n - 5; i++){
					temRoman += "C";
				}
			}

			else if (n == 4){
				temRoman += "CD";
			}
			else if (n >= 1){
				for (int i = 0; i < n; i++){
					temRoman += "C";
				}
			}

		}
		temp %= 100;
		if (temp >= 10){
			n = temp / 10;

			if (n == 9)
				temRoman += "XC";
			else if (n >= 5){
				temRoman += "L";
				for (int i = 0; i < n - 5; i++){
					temRoman += "X";
				}
			}

			else if (n == 4){
				temRoman += "XL";
			}
			else if (n >= 1){

				for (int i = 0; i < n; i++){
					temRoman += "X";

				}
			}
			//calculating the last digit of the decimal

		}
		temp %= 10;
		if (temp >= 1){
			n = temp;
			if (n == 9)
				temRoman += "IX";

			else if (n >= 5){
				temRoman += "V";

				for (int i = 0; i < n - 5; i++){
					temRoman += "I";
				}


			}
			else if (temp == 4){
				temRoman += "IV";
			}
			else if (temp >= 1){
				for (int i = 0; i < temp; i++){
					temRoman += "I";
				}
			}
		}


		return temRoman;
	}
}

romanType::~romanType()
{
}
romanType::romanType()
{
}

	
