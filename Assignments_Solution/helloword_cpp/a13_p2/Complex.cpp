/*
CH-230-A
a13_p2.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;

//Defining methods
Complex::Complex()
{
    real = imag = 0;
}

Complex::Complex(float realpart, float imagpart)
{
    real = realpart;
    imag = imagpart;
}

void Complex::setReal(float realpart)
{
    real = realpart;
}

void Complex::setImag(float imagpart)
{
    imag = imagpart;
}

//operator for printing
std::ostream& operator<<(std::ostream& out, const Complex& num)
{
    string sign = " + ";
    if(num.imag < 0)
    {
        sign = " - ";
    }    
    out << num.real  << sign;
    out << abs(num.imag) << "i" << endl;
	return out;
}

std::istream& operator>>(std::istream& in, Complex& num)
{
	in >> num.real >> num.imag;
	return in;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImag()
{
    return imag;
}

//operator for addition
Complex operator+(const Complex& num, const Complex& num2)
{
	Complex temp;
	temp.real = num.real + num2.real;
    temp.imag = num.imag + num2.imag;
	return temp;
}

//operator for subtraction
Complex operator-(const Complex& num, const Complex& num2)
{
	Complex temp;
	temp.real = num.real - num2.real;
    temp.imag = num.imag - num2.imag;
	return temp;
}

//operator for multiplication
Complex operator*(const Complex& num, const Complex& num2)
{
	Complex temp;
	temp.real = (num.real * num2.real) - (num.imag * num2.imag);  
    temp.imag = (num.real * num2.imag) + (num.imag * num2.real); 
	return temp;
}