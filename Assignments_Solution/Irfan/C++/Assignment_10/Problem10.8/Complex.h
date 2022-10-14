#ifndef COMPLEX
#define COMPLEX

#include <iostream>

using namespace std;

class Complex{
private:
    double real;
    double imag;

public:
    //constructors
    Complex();
    Complex(double r, double i);
    Complex(Complex& c);

    //empty destructor
    ~Complex(){
    }
    
    //getters
    double getReal();
    double getImag();

    //setters
    void setReal(double r);
    void setImag(double i);

    //functionality
    void print(); //no endl at end.
    Complex conj();
    Complex add(Complex c);
    Complex sub(Complex c);
    Complex mult(Complex c);

};

#endif