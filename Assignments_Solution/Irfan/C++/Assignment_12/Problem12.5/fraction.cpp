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

int Fraction::gcd(int a, int b) const{
	int tmp_gcd = 1;
	int max = a;
	if(b > a)
		max = b;
	for(int i = 1; i < max; i++)
        if(b % i==0 && a %  i == 0)
            tmp_gcd = i;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b) const{
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

//add
Fraction Fraction::add(const Fraction& f) const{
	int n = num*lcm(f.den,den)/den + f.num*lcm(den,f.den)/f.den;
	int d = lcm(f.den, den);
	return Fraction(n,d);
}

//subtract    
Fraction Fraction::sub(const Fraction& f) const{
	int n = num*lcm(f.den,den)/den - f.num*lcm(den,f.den)/f.den;
	int d = lcm(f.den, den);
	return Fraction(n,d);
}

//true if greater than or equal to arg
bool Fraction::geq(const Fraction& f) const{
	return true;
}

//true if lesser than or equal to arg
bool Fraction::leq(const Fraction& f) const{
	return false;
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
		//set as 1 if so.
		f.num = 1;
		f.den = 1;
	} else {
		f.num = n;
		f.den = d;
	}
	return in;
}


Fraction& Fraction::operator=(const Fraction& f){
	this->num = f.num;
	this->den = f.den;
	return *this;
}