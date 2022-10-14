/*
CH-230-A
a9_p4.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include<string>
using namespace std;
//function to get the subtractions
int mycount(int p, int q)
{
    return q - p;
}
//function to count the number of mentioned character in the string
int mycount(char p, string str)
{
    int n = 0;
    for(int i = 0; i < int(str.length()); i++)
    {
        if(str[i] == p)
        {
            n++;
        }
    }
    return n;
}
int main()
{
    //Calling the functions
    cout<<mycount(7, 3);
    cout<<endl<<mycount('i', "this is a string")<<endl;   
}