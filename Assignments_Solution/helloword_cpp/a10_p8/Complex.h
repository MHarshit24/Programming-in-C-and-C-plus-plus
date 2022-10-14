/*
CH-230-A
a10_p8.h
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
    Complex add(Complex num);
    Complex sub(Complex num);
    Complex mul(Complex num);
    Complex conj();
    void print();
};