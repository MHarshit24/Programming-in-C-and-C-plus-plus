/*
CH-230-A
a11_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    int size;
    //Getting the number of components in a vector
    cout << "Number of Components in the vector: ";
    cin >> size;
    cout << "Enter components of Vector 1:" << endl;
    double *vector_1;
    vector_1 = new double[size];
    for(int idx = 0; idx < size; idx++)
    {
        cin >> vector_1[idx];
    }
    cout << "Enter components of Vector 2:" <<endl;
    double *vector_2;
    vector_2 = new double[size];
    for(int idx = 0; idx < size; idx++)
    {
        cin >> vector_2[idx];
    }
    //Creating instances
    Vector v1, v2;
    v2.setVector(vector_1);
    v2.setSize(size);
    Vector v3(v2);
    Vector v4(size, vector_2);
    //vector 1 is default constructor
    cout << "Vector 1 is:" << endl;
    v1.print();
    cout << "Vector 2 is:" << endl;
    v2.print();
    //Vector 3 is a copy constructor
    cout << "Vector 3 is a copy of vector 2:" << endl;
    v3.print();
    cout << "Vector 4 is:" << endl;
    v4.print();
    cout << "Norm of the vector: " << v2.norm() << endl;
    cout << "Sum: ";
    (v2.sum(v4)).print();
    cout << "Diffrence: ";
    (v2.diff(v4)).print();
    cout << "Scalar Product: " << v2.scalar_product(v4) << endl;
    return 0;
}