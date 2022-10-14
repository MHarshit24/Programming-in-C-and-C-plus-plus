#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;
	int max = a;
	if(b > a)
		max = b;
	for(int i = 1; i < max; i++)
        if(b % i==0 && a %  i == 0)
            tmp_gcd = i;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);
}

void Fraction::print(){
	std::cout << num << "/" << den << std::endl;
}

//-- end of given code --//

//mult
Fraction Fraction::mult(const Fraction& f) const{
	int n = num*f.num;
	int d = den*f.den;
	return Fraction(n,d);
}

//div
Fraction Fraction::div(const Fraction& f) const{
	int n = num*f.den;
	int d = den*f.num;
	return Fraction(n,d);
}
//overloading
std::ostream& operator<<(std::ostream& out , const Fraction& f){
	Fraction t;
	out << f.num << "/" << f.den << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Fraction& f){
	int n,d;
	in >> n >> d;
	if(d == 0){ //checking for no division by zero
		f.num = 1;
		f.den = 1;
	} else {
		f.num = n;
		f.den = d;
	}
	return in;
}