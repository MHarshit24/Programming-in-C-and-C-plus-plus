/*
CH-230-A
a9_p8.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
void subtract_max(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
       //Finding the largest element
       if (max < a[i])
       {
           max = a[i];
       }
    }
    for(int i = 0; i < n; i++)
    {
        a[i] = a[i] - max;
    }
}
//Releasing the memory
void deallocate(int a[])
{
    delete[] a;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //Allocating memory
    int *a = new int (n);
    cout << "Enter your integer array: ";
    for (int i= 0; i < n; i++)
    {
        cin>>a[i];
    }
    //Calling the functions
    subtract_max(a, n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    deallocate(a);
    return 0;
}