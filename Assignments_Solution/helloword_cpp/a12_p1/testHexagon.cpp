/*
CH-230-A
a12_p1.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;
int main()
{
    //Creating instances
    Hexagon blue_hexagon("Hexagon", 0, 0, "Blue", 9);
    Hexagon green_hexagon("Hexagon", 0, 0, "Green", 15);
    Hexagon copy_hexagon(green_hexagon);
    cout << "Blue ";
    blue_hexagon.printName();
    //Printing the area and perimeter
    cout << "Area: " << blue_hexagon.area() << endl;
    cout << "Perimeter: " << blue_hexagon.perimeter() << endl  << endl;

    cout << "Green ";
    green_hexagon.printName();
    //Printing the area and perimeter
    cout << "Area: "<< green_hexagon.area() << endl;
    cout << "Perimeter: " << green_hexagon.perimeter() << endl << endl;

    cout << "Copied ";
    copy_hexagon.printName();
    //Printing the area and perimeter
    cout << "Area: "<< copy_hexagon.area() << endl;
    cout << "Perimeter: " << copy_hexagon.perimeter() << endl << endl;
    return 0;
}