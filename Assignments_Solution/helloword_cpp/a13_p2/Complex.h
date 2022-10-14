/*
CH-230-A
a13_p2.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float imag;
    public:
    Complex();
    Complex(float realpart, float imagpart);
    //setter methods
    void setReal(float realpart);
    void setImag(float imagpart);
    //getter methods
    float getReal();
    float getImag();
    friend std::ostream& operator<<(std::ostream& out, const Complex& num);		// prints it to the screen
	friend std::istream& operator>>(std::istream& in, Complex& num);
    friend Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    void print();
};