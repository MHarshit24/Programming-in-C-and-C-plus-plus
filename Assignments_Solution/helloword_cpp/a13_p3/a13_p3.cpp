/*
CH-230-A
a13_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int n;
    string filename, line;
    //Reading an integer from the keyboard
    cout << "Enter an integer n: ";
    cin >> n;
    cin.ignore();
    cout << endl;
    //opening and creating the file concatn.tx
    ofstream concatenatefile("concatn.txt");
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a filename: ";
        getline(cin, filename);
        cout << endl;
        ifstream inputfile;
        inputfile.open(filename);
        concatenatefile << inputfile.rdbuf() << endl;
        inputfile.close();
    }
    cout << "Concatenating finished";
    concatenatefile.close();    //Closing the file
    return 0;    
}