#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <ctime>

using namespace std;

/* 
CH-230-A
a12_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


const int num_obj = 25;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_perm = 0.0;

	//setting up rand and colors array
	srand(static_cast<unsigned int>(time(0)));
	string colors[] = {"RED", "BLACK", "VIOLET", "BLUE"};

	Area *A[25];

	//for loop to setup variables
	for(int i = 0; i < num_obj; i++){
		int color = rand() % 4;
		double size1 = 5 + (rand()%950)/10;
		double size2 = 5 + (rand()%950)/10;

		//switch to randomise
		switch(rand()%4){
			case 0:
				list[i] = & Circle(colors[color].c_str(), size1);
				break;
			case 1:
				list[i] = & Rectangle(colors[color].c_str(), size1, size2);
				break;
			case 2:
				list[i] = & Ring(colors[color].c_str(), size1, size2);
				break;
			case 3:
				list[i] = & Square(colors[color].c_str(), size1);
				break;
 			default:
				break;
		}
	}

	//final calculations
	while (index < num_obj) {					
		(list[index])->getColor();				
		double area = list[index]->calcArea();  
		double perm = list[index++]->calcPerm();
		sum_area += area;
		sum_perm += perm;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
	cout << "\nThe total perimeter is "
			<< sum_perm << " units " << endl;
	return 0;
}