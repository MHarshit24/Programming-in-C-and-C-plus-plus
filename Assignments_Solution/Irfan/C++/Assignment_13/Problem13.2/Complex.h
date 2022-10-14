#ifndef COMPLEX
#define COMPLEX

#include <iostream>

using namespace std;

/* 
CH-230-A
a13_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

class Complex{
private:
    double real;
    double imag;

public:
    //constructors
    Complex();
    Complex(double r, double i);
    Complex(const Complex& c);

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
    Complex add(const Complex& c) const;
    Complex sub(const Complex& c) const;
    Complex mlt(const Complex& c) const; //multiplies two complex numbers

    //overloading

    Complex operator+(const Complex& c) const { return this->add(c); }
    Complex operator-(const Complex& c) const { return this->sub(c); }
    Complex operator*(const Complex& c) const { return this->mlt(c); }
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);
    Complex& operator=(const Complex& c);

};

#endif