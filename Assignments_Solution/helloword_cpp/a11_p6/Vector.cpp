/*
CH-230-A
a11_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;

//Default constructor
Vector::Vector()
{
    size = 0;
    vector = new double[size];
    cout << endl << "Default constructor is called" << endl;
}

//Parametric constructor
Vector::Vector(int newsize, double *&newvector)
{
    size = newsize;
    vector = newvector;
    cout << endl <<"Constructor is called" << endl;
}

//Copy constructor
Vector::Vector(Vector &vec)
{
    size = vec.size;
    vector = vec.vector;
    cout << endl <<"Copy constructor is called" << endl;
}

//Destructor
Vector ::~ Vector()
{
    delete [] vector;
    cout << endl <<"Destructor is called" << endl;
}

//Setter method
void Vector::setSize(int newsize)
{
    size = newsize;
}

void Vector::setVector(double *&newvector)
{
    vector = newvector;
}

//Service method
void Vector::print()
{
    for(int idx = 0; idx < size; idx++)
    {
        cout << vector[idx] << " ";
    }
    cout << endl;
}

//Getter method
int Vector::getSize()
{
    return size;
}

double *Vector::getVector()
{
    return vector;
}

double Vector::norm()
{
    double summation = 0;
    for(int idx = 0; idx < size; idx++)
    {
        summation = summation + pow(vector[idx], 2.0);
    }
    return sqrt(summation);
}

Vector Vector::sum(const Vector &vec) const
{
    double* temp_var;
    temp_var = new double[size];
    for(int idx = 0; idx < size; idx++)
    {
        temp_var[idx] = vector[idx] + vec.vector[idx];
    }
    Vector output(size, temp_var);
    return output;
}

Vector Vector::diff(const Vector &vec) const
{
    double* temp_var;
    temp_var = new double[size];
    for(int idx = 0; idx < size; idx++){
        temp_var[idx] = vector[idx] - vec.vector[idx];
    }
    Vector output(size, temp_var);
    return output;
}

double Vector::scalar_product(Vector& vec)
{
    double product = 0;
    for(int idx = 0; idx < size; idx++)
    {
        product = product + (vector[idx] * vec.vector[idx]);
    }
    return product;
}