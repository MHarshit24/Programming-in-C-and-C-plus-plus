#include <iostream>
#include "fraction.h"

using namespace std;

/* 
CH-230-A
a12_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


int main(void)
{
	Fraction a;
	cin >> a;

	Fraction b;
	cin >> b;

	Fraction mult = a*b, div = a/b;

	cout << mult; 
	cout << div;
}