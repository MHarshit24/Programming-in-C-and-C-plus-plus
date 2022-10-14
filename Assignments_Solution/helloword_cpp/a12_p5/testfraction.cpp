/*
CH-230-A
a12_p5 (testfraction.cpp)
 Harshit Mutha
 hmutha@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	
	Fraction x, y;
	cout << "fraction 1 : ";
	cin >> x;
	cout << "fraction 2 : ";
	cin >> y;

	
	if (x > y)
	{cout << "greater  " << x;}
	else if (x < y)
	{cout << "greater" << y;}
	
	
	Fraction m = x + y;
	Fraction n = x - y;
	cout << "Sum " << m;
	cout << "Difference " << n;
}
