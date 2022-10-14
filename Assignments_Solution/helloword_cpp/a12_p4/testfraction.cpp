/*
CH-230-A
a12_p4.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a, b;
	cout << "First fraction: ";
	cin >> a;
	cout << "Second fraction: ";
	cin >> b;
	Fraction product = a * b;
	Fraction quotient = a / b;
	cout << product << endl;
	cout << quotient << endl;
}