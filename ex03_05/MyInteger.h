#ifndef MYINTEGER_H_ 
#define MYINTEGER_H_

class MyInteger {
private:
	int value;

public:

	MyInteger(int myvalue);
	const int getint();
	const bool isEven();
	const bool isOdd(); 
	const bool isPrime();
	static bool isEven(int myvalue) {
		if (myvalue % 2 == 0)
			return true;
		else
			return false;
	};
	static bool isOdd(int myvalue) {
		if (myvalue % 2 == 0)
			return false;
		else
			return true;
	};
	static bool isPrime(int myvalue) {
		for (int counter = 2; counter < myvalue; counter++) {
			if (myvalue%counter == 0)
				return false;
		}
		return true;
	};
	static bool isEven(const MyInteger&) {};
	static bool isOdd(const MyInteger&) {};
	static bool isPrime(const MyInteger&) {};
	const bool equals(int myvalue);
	const bool equals(const MyInteger&) {
		if (value == getint())
			return true;
		else
			return false;
	};
	static int parseInt(const string &ss) {};
};
#endif

#pragma once
