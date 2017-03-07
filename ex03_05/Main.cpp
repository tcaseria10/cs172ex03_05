#include <iostream>	
#include "MyInteger.h"
using namespace std;

// Tyler Caseria
// CS172
// Hw 03 : Exercise 05
// 23 February 2017

int main() {
	int errors = 0;
	MyInteger int1(7);
	if (int1.isEven() == true)
		errors++;
	if (int1.isOdd() == false)
		errors++;
	if (int1.isPrime() == false)
		errors++;
	if (errors == 0)
		cout << "Passed." << endl;

	


	return 0;
}