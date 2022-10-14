#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"
#include "Area.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double s);
		~Square();
		double calcArea() const;
		double calcPerm() const;
	private:
		double side;
};

#endif
