/*
CH-230-A
a12_p5 (fraction.h)
Harshit Mutha
hmutha@jacobs-university.de
*/

#ifndef FRACTION_H_
#define FRACTION_H_

#include<iostream>
using namespace std;

class Fraction {

private:
	int num;
	int den;

	int gcd(int a, int b);
	int lcm(int a, int b);

public:
	Fraction();
	Fraction(int, int = 1);
								
	void print();

	friend ostream& operator<<(ostream&, Fraction&);
	friend istream& operator>>(istream&, Fraction&);
	Fraction operator*(const Fraction& frac);
	Fraction operator/(const Fraction& frac);
	Fraction operator+(const Fraction& frac);
	Fraction operator-(const Fraction& frac);
	Fraction operator=(const Fraction& frac);
	bool operator<(const Fraction& frac);
	bool operator>(const Fraction& frac);
	
};






#endif 
