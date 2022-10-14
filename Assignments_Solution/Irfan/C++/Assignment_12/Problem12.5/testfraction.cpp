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

	cout << endl; //pretty printing

	if( a > b ){
		cout << "Greatest: " << a;
	} else {
		cout << "Greatest: " << b;
	}

	Fraction sum = a + b, diff = a - b;
	cout << "sum: " << sum
	     << "diff: " << diff << endl;

}