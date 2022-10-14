/*
CH-230-A
a12_p5 (fraction.cpp)
 Harshit Mutha
 hmutha@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

    if (a == 0)
	{tmp_gcd = b;}
    else if (b == 0)
	{tmp_gcd = a;}
	else if (a == b)
	{tmp_gcd = a;}
	else if (a > b)
	{tmp_gcd = gcd(a - b, b);}
	else
	{tmp_gcd = gcd(a, b - a);}

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

void Fraction::print()
{
	cout << num << "/" << den << std::endl;
}


ostream& operator<<(ostream& out, Fraction& frac)
{
	out << frac.num << "/" << frac.den << endl;
	return out;
}


istream& operator>>(istream& in, Fraction& frac)
{
	in >> frac.num;
	in >> frac.den;
	return in;
}

Fraction Fraction::operator=(const Fraction& frac)
{
    this->num = frac.num;
    this->den = frac.den;
    return *this;
}


Fraction Fraction::operator*(const Fraction& frac)
{
	Fraction frac1;
	frac1.num = num * frac.num;
	frac1.den = den * frac.den;
	
	return frac1;
}


Fraction Fraction::operator/(const Fraction& frac)
{
	Fraction frac1;
	frac1.num = num * frac.den;
	frac1.den = den * frac.num;
	
	return frac1;
}


bool Fraction::operator<(const Fraction& frac)
{
    double f_1 = double(num) / double(den);
    double f_2 = double(frac.num) / double(frac.den);
    if (f_1 < f_2)
    {
        return true;
    }
    return false;
}


bool Fraction::operator>(const Fraction& frac)
{
    double f_1 = double(num) / double(den);
    double f_2 = double(frac.num) / double(frac.den);
    if (f_1 > f_2)
    {
        return true;
    }
    return false;
}

Fraction Fraction::operator+(const Fraction& frac)
{
	Fraction frac1;
	frac1.num = num * (lcm(den, frac.den) / den) + frac.num * (lcm(den, frac.den) / frac.den);
	frac1.den = lcm(den, frac.den);
	return frac1;
}


Fraction Fraction::operator-(const Fraction& frac)
{
	Fraction frac1;
	frac1.num = num * (lcm(den, frac.den) / den) - frac.num * (lcm(den, frac.den) / frac.den);
	frac1.den = lcm(den, frac.den);
	return frac1;
}


