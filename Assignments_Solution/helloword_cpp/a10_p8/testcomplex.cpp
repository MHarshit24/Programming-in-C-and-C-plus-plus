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
int main()
{
    Complex c1(3, 2);
    Complex c2(2, -4);
    //printing
    c1.print();
    c2.print();
    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.print();
    Complex sub = c1.sub(c2);
    cout << "Subtraction: ";
    sub.print();
    Complex mul = c1.mul(c2);
    cout << "Multiplication: ";
    mul.print();
    Complex conj = c1.conj();
    cout << "Conjugate: ";
    conj.print();
    return 0;
}