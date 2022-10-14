/*
CH-230-A
a11_p1.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
using namespace std;
int main()
{
    //defining variables
    double height, width, depth;
    Box *data;
    int n;
    cout << "Enter half the number of boxes: ";
    cin >> n;
    cout << endl;
    data = new Box[2*n];
    cout << "Enter the following data: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Box " << i << endl;
        //taking inputs from the user
        cout << "Enter height: ";
        cin >> height;
        data[i].setHeight(height);
        cout << "Enter width: ";
        cin >> width;
        data[i].setWidth(width);
        cout << "Enter depth: ";
        cin >> depth;
        data[i].setDepth(depth);
        data[i].print();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Box " << i + n << endl;
        data[i + n] = Box(data[i]);
        data[i+n].print();
    }
    //deallocating memory
    delete []data;
    return 0;
}