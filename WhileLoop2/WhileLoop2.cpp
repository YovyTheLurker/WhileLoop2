// WhileLoop2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Little digit counter demonstrating interations of while loops.

#include <iostream>
using namespace std;

int main()
{
//Count digits of a number
	int number;
	cout << "Number: ";
	cin >> number;
	if (number == 0)
		cout << "You have entered zero.";
	else {
		if (number < 0) {
			number = -1 * number;
		}
		int counter = 0;
		while (number > 0) {
			number /= 10;

			counter++;
		}
		cout << "Number countains " << counter << " digits.\n";
		
		
		
	}

}

