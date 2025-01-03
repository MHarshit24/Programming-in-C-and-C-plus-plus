#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "Circle.h"


Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerm() const {
	std::cout << "calcPerm of Circle...";
	return radius * M_PI * 2;
}