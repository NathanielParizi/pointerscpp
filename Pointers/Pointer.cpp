/*
 * Pointer.cpp
 *
 *  Created on: Jul 10, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>

using namespace std;

void manipulate(int value){

	value = 10;
	cout << "val of manipulate" << value << endl;

}

void manipulate2(int *value){

	*value = 22; // deref
	cout << "val of manipulate" << *value << endl;

}


int main() {

	int nVal = 8;   // memory has been allocated

	int* pointerValue = &nVal;  // the address is stored


	nVal = 12;	//



	cout << nVal << endl;


	cout << "Pointer address in Hexadecimal: " << pointerValue << endl;  //stored in memory
	cout << "Int value via pointer: " << *pointerValue << endl;

	cout << "************" << endl;

	int myInt = 42;

	manipulate(myInt);
	cout << "myInt: " << myInt << endl;
	manipulate2(&myInt);
	cout << "myInt: " << myInt << endl;



	//casting to different primitive data types
	double val1 = (double) 7/2;

	cout << val1 << endl;

	int value2 = (int) 7.3;
	cout << value2 << endl;

	int value3  = 9;
	value3 += 1;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5;
	cout << value4 << endl;

	int modval= 1042 % 10;   //modulo
	cout << modval << endl;

	//operator precedence

	double equation = 5.3 / 4 + 2 * 6;
	cout << equation << endl;
	equation = (5.3/4)+(2*6);
		cout << equation << endl;

		cout << "How many second do you want to calculate into minutes, hours, days?" << endl;
		int seconds;
		cin >> seconds;
		double minutes = seconds /60;
		double hours = minutes/60;
		double days = hours / 24;
		cout << "********************" << endl;
		cout << "minutes: " << minutes << endl;
		cout << "hours: " << hours << endl;
		cout << "days: " << days << endl;


	return 0;
}

