#include <iostream>
#include "Shapes.h"
using namespace std;

/* 
CH-230-A
a12_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    Hexagon blue("B", 3, 4, 9, "blue");
    Hexagon green("G", 0, 0, 15, "green");
    Hexagon  copy(green);
    

    cout << "Hexagon ";
    blue.printName();
    cout << ",has perimeter = " << blue.perimeter() << endl;
    cout << "and area = " << blue.area() << endl;
    cout << "and is colored " << blue.getColor() << endl << endl;

    cout << "Hexagon ";
    green.printName();
    cout << ",has perimeter = " << green.perimeter() << endl;
    cout << "and area = " << green.area() << endl;
    cout << "and is colored " << green.getColor() << endl << endl;

    cout << "Hexagon ";
    copy.printName();
    cout << ",has perimeter = " << copy.perimeter() << endl;
    cout << "and area = " << copy.area() << endl;
    cout << "and is colored " << copy.getColor() << endl << endl; 
}