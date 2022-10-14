/*
CH-230-A
a12_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
 
const int num_obj = 6;
int main() {
	Area *list[num_obj];						// (1)making a list of number of 6 objects
	int index = 0;								// (2)integer index is set to zero
	double sum_area = 0.0;						// (3)double sum_area is set 0.0
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)Creating instance of the class and setting input values in that
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
	list[0] = &blue_ring;						// (5)blue ring is pointed by first element
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj) {					// (7)running a while loop for 6 times if the num_obj is lesser than index 
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)calculating areas
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)printing the sum of all areas
	return 0;
}


/*
              Area
			    |
		_____________________
		|                   |
	  Circle              Rectangle
	    |                   |
	   Ring	              Square

*/