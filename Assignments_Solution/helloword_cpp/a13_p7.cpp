/*
CH-230-A
a13_p7.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class OwnException : public exception
{
    public:
        const char* what() const noexcept
        {
            return "OwnException\n";
        }
        OwnException (const string& x)
        {
            cout << x;
        }
};

void function(int n)
{
    if (n == 1)
    {
        throw 'a';
    }
    else if (n == 2)
    {
        throw 12;
    }
    else if (n == 3)
    {
        throw true;
    }
    else 
    {
        throw OwnException ("Default case exception\n");
    }
}

int main()
{
    try
    {
        function(1);
    }
    catch (char ch)
    {
        cerr << "Caught in main: " << ch << endl;
    }
    try 
    {
        function(2);
    }
    catch (int x)
    {
        cerr << "Caught in main: " << x << endl;
    }
    try 
    {
        function(3);
    }
    catch (bool b)
    {
        cerr << "Caught in main: " << b << endl;
    }
    try
    {
        function(24);
    }
    catch (const OwnException& OE)
    {
        cerr << "Caught in main: "<< OE.what() << endl;
    }
    return 0;
}