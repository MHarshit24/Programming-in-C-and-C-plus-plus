/*
CH-230-A
a11_p5.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main() 
{
  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rec("Rectangle", 0, 0, 2, 6);
  Square s("Square", 0, 0, 4);

  c.printName();
  cout << "Area: " << c.area() << endl << endl;
  cout << "Perimeter: " << c.perimeter() << endl << endl;

  r.printName();
  cout << endl << endl;

  rec.printName();
  cout << "Area: " << rec.area() << endl << endl;
  cout << "Perimeter: " << rec.perimeter() << endl << endl;

  s.printName();
  cout << "Area: " << s.area() << endl << endl;
  cout <<"Perimeter: " << s.perimeter() << endl << endl;
}