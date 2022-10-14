/*
CH-230-A
a10_p8.cpp
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
void Complex::print()
{
    char sign = '+';
    if(imag < 0)
    {
        sign = '-';
    }    
    cout << real << ' ' << sign;
    cout << ' ' << abs(imag) << "i" << endl;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImag()
{
    return imag;
}
Complex Complex::add(Complex num)
{
    Complex temp;
    temp.real = real + num.real;
    temp.imag = imag + num.imag;
    return temp;
}
Complex Complex::sub(Complex num)
{
    Complex temp;
    temp.real = num.real - real;
    temp.imag = num.imag - imag;
    return temp;
}
Complex Complex::mul(Complex num)
{
    Complex temp;
    float newreal, newimag;
    newreal = real * num.imag - imag * num.real;
    newimag = imag * num.real + real * num.imag;
    temp.setImag(newimag);
    temp.setReal(newreal);
    return temp;        
}
Complex Complex::conj()
{
    Complex temp;
    temp.real = real;
    temp.imag = -imag;
    return temp;
}