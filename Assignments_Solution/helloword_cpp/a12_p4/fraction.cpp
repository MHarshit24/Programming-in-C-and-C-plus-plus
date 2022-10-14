/*
CH-230-A
a12_p4.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

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
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
	out << f.num << '/' << f.den;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
	int n, d;
	in >> n >> d;
	if(d == 0)
	{
		f.num = 1;
		f.den = 1;
	}
	else
	{
		f.num = n;
		f.den = d;
	}
	return in;
}

Fraction operator*(const Fraction& f, const Fraction& m)
{
	Fraction t;
	t.num = f.num * m.num;
	t.den = f.den * m.den;
	return t;
}

Fraction operator/(const Fraction& f, const Fraction& m)
{
	Fraction i;
	i.num = f.num * m.den;
	i.den = f.den * m.num;
	return i;
}