/*
CH-230-A
a9_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Declaring integer, double, and, string
    int n;
    double x;
    string s;
    //Reading integer, double, and, string
    cout<<"Enter a value for n: ";
    cin>>n;
    cout<<"Enter a value for x: ";
    cin>>x;
    cout<<"Enter a string s: ";
    cin.ignore();
    getline(cin, s);
    //Printing s: x
    for (int idx = 0; idx < n; idx++)
    {
        cout<<s<<": "<<x<<endl;
    }
    return 0;
}