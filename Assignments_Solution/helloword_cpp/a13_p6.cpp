 /*
CH-230-A
a13_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int main()
{
    try
    {
        // Create a vector of size 20 with
        // all values as 8.
        vector<int> vector(20, 8);
        cout << "Accessing the 21st element of the vector...\n";
        vector.at(20); // vector::at() throws out_of_range
    }
    catch (const out_of_range t)
    { 
        // caught by reference to base
        cerr << " a standard exception was caught, with message '"
                  << t.what() << "'\n";
    }
    return 0;
}

void print(vector<int> v){
    for (int n : v) {
            cout << n;
        }
}