#include <iostream>
#include "Square.h"

Square::Square(const char *n, double ns) : Rectangle(n, ns, ns) {
    side = ns;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side*side;
}

double Square::calcPerm() const {
    std::cout << "calcPerm of Square...";
	return 4*side;
}