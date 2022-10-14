/*
CH-230-A
a9_p6.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
//Function to return the first even number
int myfirst(int arrint[], int num_of_int)
{
    for (int i = 0; i < num_of_int; i++)
    {
        if (arrint[i] % 2 == 0  && arrint[i] > 0)
        {
            return arrint[i];
        }
    }
    return -1;
}
/*
Function to return the first negative element which 
does not have a fractional part
*/
double myfirst(double arrdouble[], int num_of_double)
{
    for (int i = 0; i < num_of_double; i++)
    {
        if (arrdouble[i] < 0 && (arrdouble[i] / (int) arrdouble[i]) == 1)
        {
            return arrdouble[i];
        }
    }
    return -1.1;
}
//Function to return the first consonant
char myfirst(char arrchar[], int num_of_char)
{
    for (int i = 0; i < num_of_char; i++) 
    {
        if (arrchar[i] != 'A' && arrchar[i] != 'E' && arrchar[i] != 'I' && arrchar[i] != 'O' && arrchar[i] != 'U' && 
        arrchar[i] != 'a' && arrchar[i] != 'e' && arrchar[i] != 'i' && arrchar[i] != 'o' && arrchar[i] != 'u')
        {
            return arrchar[i];
        }
    }
    return 0;
}
int main()
{
    int num_of_int, num_of_char, num_of_double;
    cout<<"Enter the number of elements in your integer array: ";
    cin>>num_of_int;
    cout<<"Enter the number of elements in your double array: ";
    cin>>num_of_double;
    cout<<"Enter the number of elements in your character array: ";
    cin>>num_of_char;
    int arrint[num_of_int];
    char arrchar[num_of_char];
    double arrdouble[num_of_double];
    //Taking the three array from the user
    cout<<"Elements for integer array: ";
    for (int i = 0; i < num_of_int; i++)
    {
        cin >> arrint[i];
    }
    cout<<"Elements for character array: ";
    for (int i = 0; i < num_of_char; i++)
    {
        cin >> arrchar[i];
    }
    cout<<"Elements for double array: ";
    for (int i = 0; i < num_of_double; i++)
    {
        cin >> arrdouble[i];
    }
    //Calling the functions
    cout<<myfirst(arrint, num_of_int)<<endl;
    cout<<myfirst(arrchar, num_of_char)<<endl;
    cout<<myfirst(arrdouble, num_of_double)<<endl;
    return 0;
}