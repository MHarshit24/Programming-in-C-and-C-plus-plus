#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

/* 
CH-230-A
a13_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    //setting up A and B, two complex instances.
    Complex A,B;
    
    //input files and testing
    ifstream one("in1.txt"), two("in2.txt");
    if(one.bad() || two.bad()){
        cout << "Input file error";
        exit(0);
    }
    
    /*
        input format requires two >>s for one complex number.
        1+2i
        1 2
        1 -3
        1 -3i
        etc work.
    */
    one >> A;
    two >> B;

    //output files and testing
    ofstream out("output.txt");
    if(out.bad()){
        cout << "output file error";
        exit(0);
    }


    //Pretty printing calculations and outputs.
    cout <<  "Sum of both: ";
    cout << A + B;
    out << A + B << endl; 
    cout << endl << "Difference of first from second: ";
    cout << A - B;
    out << A - B << endl;
    cout << endl << "Multiplication of both: ";
    cout << A * B;
    out << A * B << endl;

    return 0;
}