/*
CH-230-A
a9_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
using namespace std;
//Writing the function for the absolute x
float absolute_function(float x)
{
    if (x < 0)
    {
        return x * -1;
    }
    else
    {
        return x;
    }
}
int main()
{
    float x;
    cout<<"Enter a value for x: ";
    cin>>x;
    //Calling the function
    cout<<absolute_function(x);
}