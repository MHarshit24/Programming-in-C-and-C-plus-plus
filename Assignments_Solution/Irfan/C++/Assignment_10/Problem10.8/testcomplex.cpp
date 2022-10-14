#include <iostream>
#include "Complex.h"

using namespace std;

/* 
CH-230-A
a10_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    //setting up A and B, two complex instances.
    double tmp;
    Complex A,B;
    cout << "A's Real part: ";
    cin >> tmp;
    A.setReal(tmp);
    cout << "A's Imaginary part: ";
    cin >> tmp;
    A.setImag(tmp);

    cout << "B's Real part: ";
    cin >> tmp;
    B.setReal(tmp);
    cout << "B's Imaginary part: ";
    cin >> tmp;
    B.setImag(tmp);

    //Pretty printing calculations and outputs.
    cout << endl << endl;
    cout << "Conjugate of first: ";
    (A.conj()).print();
    cout << endl << "Sum of both: ";
    (A.add(B)).print();
    cout << endl << "Difference of first from second: ";
    (B.sub(A)).print();
    cout << endl << "Multiplication of both: ";
    (A.mult(B)).print();


    return 0;
}