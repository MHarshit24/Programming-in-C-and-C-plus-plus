#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerm() const{
	std::cout << "calcPerm of Ring...";
	return 2 * M_PI * (innerradius) + Circle::calcPerm();
}
