/*
CH-230-A
a12_p6.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
	private:
		double radius;
};

#endif
