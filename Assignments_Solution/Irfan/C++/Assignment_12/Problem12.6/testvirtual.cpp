#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

/* 
CH-230-A
a12_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/
 
/*

			 Area
			/    \
		Circle  Rectangle
		/		    \
	Ring		   Square

*/

/*
1. Creates an array of pointer area
   which is a base class to all relevant classes.
   This allows it store any child pointer.

2. Index is later used to loop through the array referenced in point 1

3. This is a variable of type double that will store the area
   of all relevant shapes

4. creates an object blue_ring of type Ring with
   color "BLUE" outter radius 5, inner radius 2

5. stores address of Ring blue_ring in list[0] an array of Area ptrs

7. while index variable is less than number of ptrs in Area ptr array index

8. hold area of shape at index "index" of list then post increment "index"

9. output area that was calculated in the while loop.

*/

const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_perm = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square gray_square("GRAY", 5);
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &gray_square;
	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		double area = list[index]->calcArea();  // (8)
		double perm = list[index++]->calcPerm();
		sum_area += area;
		sum_perm += perm;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
	cout << "\nThe total perimeter is "
			<< sum_perm << " units " << endl;
	return 0;
}
