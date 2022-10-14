/*
CH-230-A
a12_p6.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
	private:
		double innerradius;
};

#endif
