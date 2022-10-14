/*
CH-230-A
a9_p5.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std ;
int main () 
{
    //Declaring integers and string
    string str;
    int number, attempts = 0;
    srand (static_cast < unsigned int > (time (0)));
    int random = rand();
    int rand_n = (random % 100) + 1;
    //Taking inputs from the keyboard
    cout<<"Enter your name: ";
    getline(cin, str);
    cout<<"Enter a number: ";
    cin>>number;
    //Running a while loop to help the user get to the number
    while(number != rand_n)
    {
        if(number < rand_n)
        {
            cout<<"Too less"<<endl<<endl;
            attempts = attempts + 1;
        }
        else
        {
            cout<<"Too high"<<endl<<endl;
            attempts = attempts + 1;
        }
        cout<<"Enter a number: ";
        cin>>number;
        cout<<endl;
    }
    cout<<"Congatulations "<<str<<" you found the number in "<<attempts<<" attempts"<<endl;
    return 0;
}