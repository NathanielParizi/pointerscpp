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

	return 0;
}

