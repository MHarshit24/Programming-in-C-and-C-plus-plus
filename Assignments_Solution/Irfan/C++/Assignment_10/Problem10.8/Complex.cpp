#include <iostream>
#include "Complex.h"

using namespace std;

//Constructors
Complex::Complex(){
    real = 0;
    imag = 0; 
}

Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex::Complex(Complex& c){
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
    cout << real << " + " << imag << "i"; 
}

// ret stands for return
Complex Complex::conj(){
    Complex ret(real, (-1)*imag);
    return ret;
}

Complex Complex::add(Complex c){
    Complex ret(real+c.real, imag + c.imag);
    return ret;
}

//sub is not commutative, a.sub(b) returns a - b and not b - a
Complex Complex::sub(Complex c){
    Complex ret(real-c.real, imag - c.imag);
    return ret;
}

Complex Complex::mult(Complex c){
    Complex ret(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    return ret;
}
