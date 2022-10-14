/*
CH-230-A
a13_p2.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>
#include "Complex.h"
using namespace std;

int main()
{
    Complex complex1, complex2;   //Creating instances
    //Reading files
    ifstream input1("in1.txt");
    ifstream input2("in2.txt");
    input1 >> complex1;
    input2 >> complex2;
    cout << complex1;
    cout << complex2;
    Complex Sum = complex1 + complex2;
    Complex Difference = complex1 - complex2;
    Complex Product = complex1 * complex2;
    //Printing
    cout << "Sum: " << Sum << endl;
    cout << "Difference: " << Difference << endl;
    cout << "Product: " << Product << endl;
    input1.close();
    input2.close();
    return 0;
}