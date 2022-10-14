#include "Shapes.h"
#include <iostream>

using namespace std;

/* 
CH-230-A
a11_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

  cout << endl << endl; //skipping a few lines

  Circle c2("Circle c2", 5, 5, 3); //radius is 3
  c2.printName();
  cout << ",has area = " << c2.area() << endl;
  cout << "and perimeter = " << c2.perimeter() << endl << endl;


  Rectangle rect("Rectangle rect", 6, 3, 5, 10); //5 wide 10 tall
  rect.printName();
  cout << ",has area = " << rect.area() << endl;
  cout << "and perimeter = " << rect.perimeter() << endl << endl;

  Square s("Square s", 9, 3, 4); //side is 4
  s.printName();
  cout << ",has area = " << s.area() << endl;
  cout << "and perimeter = " << s.perimeter() << endl; 
 
  return 0;

}