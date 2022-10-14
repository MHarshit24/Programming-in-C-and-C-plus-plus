#include <iostream>
#include "Complex.h"

using namespace std;

/* 
CH-230-A
a13_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//Constructors
Complex::Complex(){
    real = 0;
    imag = 0; 
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex::Complex(const Complex& c){
    real = c.real;
    imag = c.imag;
}

//getters
double Complex::getReal(){
    return real;
}

double Complex::getImag(){
    return imag;
}

//setters
void Complex::setReal(double r){
    real = r;
}

void Complex::setImag(double i){
    imag = i;
}



//Functionality
//print contains no endl.
void Complex::print(){
    if(imag >= 0)
        cout << real << "+" << imag << "i";
    else 
        cout << real << "-" << imag << "i"; 
}

// ret stands for return
Complex Complex::conj(){
    Complex ret(real, (-1)*imag);
    return ret;
}

Complex Complex::add(const Complex& c) const{
    Complex ret(real+c.real, imag + c.imag);
    return ret;
}

//sub is not commutative, a.sub(b) returns a - b and not b - a
Complex Complex::sub(const Complex& c) const{
    Complex ret(real-c.real, imag - c.imag);
    return ret;
}

Complex Complex::mlt(const Complex& c) const{
    Complex ret(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    return ret;
}

//overloading

ostream& operator<<(ostream& out, const Complex& c){
    if(c.imag >= 0)
        out << c.real << "+" << c.imag << "i";
    else 
        out << c.real << c.imag << "i"; // "-" automatically appended
    return out;
}

istream& operator>>(istream& in, Complex& c){
    in >> c.real;
    in >> c.imag;
    return in;
}

Complex& Complex::operator=(const Complex& c){
    real = c.real;
    imag = c.imag;
    return *this;
}
