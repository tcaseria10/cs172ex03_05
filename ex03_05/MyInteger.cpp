#include "MyInteger.h"
#include <iostream>
#include <cmath>
using namespace std;


MyInteger::MyInteger(int myvalue) {
	value = myvalue;
}

const int MyInteger::getint() {
	return value;
}

const bool MyInteger::isEven() {
	if (value % 2 == 0)
		return true;
	else
		return false;
}

const bool MyInteger::isOdd() {
	if (value % 2 == 0)
		return false;
	else
		return true;
}

const bool MyInteger::isPrime() {
	for (int counter = 2; counter < value; counter++) {
		if (value%counter == 0)
			return false;
	}
	return true;
}

const bool MyInteger::equals(int myvalue) {
	if (value == myvalue)
		return true;
	else
		return false;
}

const bool MyInteger::equals(const MyInteger&) {
	
}


