#include <iostream>
#include "Vector.h"

using namespace std;

/* 
CH-230-A
a11_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){

    //variables and instantiation!
    double A[] = {1, 2, 3, 4};
    double B[] = {10, 20, 30 ,40};

    Vector Vnull(); //default constructor
    Vector Va(A,4); //parametric, second
    Vector Vcopy(Va); //copy, third
    Vector Vb(B,4); //parametric, fourth

    //Norm of second
    cout << "Norm of Va (second) = " << Va.norm() << endl;

    //scalar/dot product of Va and Vb
    cout << "Dot product of Va and Vb = " << Va.dot(Vb) << endl;

    //sum of Va and Vb
    cout << "Sum of Va and Vb = ";
    (Va.add(Vb)).print();
    cout << endl;

    //difference of Va and Vb
    cout << "Difference of Va and vb = ";
    (Va.sub(Vb)).print();
    cout << endl;

}