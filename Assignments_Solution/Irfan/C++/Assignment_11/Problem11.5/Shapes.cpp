// please refer to shapes.h for methods documentation
#define _USE_MATH_DEFINES //required for my system.

#include <iostream>
#include <cmath>
#include "Shapes.h"


using namespace std; 

//SHAPE
Shape::Shape(const string& n) : name(n){}

Shape::Shape() : name("default0"){}

Shape::Shape(const Shape &s) : name(s.name){}

void Shape::printName() const {
	cout << name << endl;
}

 //compressed getter//setters for readability.
string Shape::getName(){ return name; } //NAME getter
void Shape::setName(string &n){ name = n; } //NAME setter

//Centered Shape
CenteredShape::CenteredShape(const string& n, double nx, double ny) :
	Shape(n), 
	x(nx),
	y(ny) { }

CenteredShape::CenteredShape() :
	Shape(),
	x(0),
	y(0) { }

CenteredShape::CenteredShape(const CenteredShape &a) :
	Shape(a), 
	x(a.x),
	y(a.y) { }

void CenteredShape::move(double nx, double ny){
	x = nx;
	y = ny;
}

double CenteredShape::getX(){ return x; } //X getter
double CenteredShape::getY(){ return y; } //Y getter
void CenteredShape::setY(double ny){ y = ny; } //Y setter
void CenteredShape::setX(double nx){ x = nx; } //X setter

//RegularPolygon, chopping to meet 80 char limit.
RegularPolygon::RegularPolygon(
	const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny),
	EdgesNumber(nl) { }

RegularPolygon::RegularPolygon() :
	CenteredShape(), 
	EdgesNumber(3) { } //default polygon is a triangle

RegularPolygon::RegularPolygon(const RegularPolygon &a) :
	CenteredShape(a),
	EdgesNumber(a.EdgesNumber) { }
 
int RegularPolygon::getEdge(){ return EdgesNumber; } //EdgesNumber getter
void RegularPolygon::setEdge(int n){ EdgesNumber = n; } //EdgesNumber setter

//Rectangle
Rectangle::Rectangle(
	const string &n, double nx, double ny, double nwidth, double nheight) :
	RegularPolygon(n, nx, ny, 4),
	width(nwidth),
	height(nheight) { }

Rectangle::Rectangle() : //default rectangle is 1 by 1
	RegularPolygon(),
	width(1),
	height(1) { }

Rectangle::Rectangle(const Rectangle &a) :
	RegularPolygon(a), 
	width(a.width),
	height(a.height) { }

//functionality
double Rectangle::perimeter(){
	return 2 *(width + height);
}

double Rectangle::area(){
	return width*height;
}

double Rectangle::getWidth(){ return width; } //Width getter
double Rectangle::getHeight(){ return height; } //Height getter
void Rectangle::setWidth(double w){ width = w; } //Width setter
void Rectangle::setHeight(double h){ height = h; } //Height setter

//Square
Square::Square(const string &n, double nx, double ny, double nside) :
	Rectangle(n, nx, ny, nside, nside), 
	side(nside) { }

Square::Square() :
	Rectangle(),
	side(1) { } //default square is 1 by 1
	

Square::Square(const Square &s) :
	Rectangle(s),
	side(s.side) { }

//functionality
double Square::perimeter(){
	return 4*side;
}

double Square::area(){
	return side*side;
}

double Square::getSide() { return side; } //Side getter
void Square::setSide(double ns){ side = ns; } //Side setter

//Circle
Circle::Circle(const string& n, double nx, double ny, double r) :
	CenteredShape(n,nx,ny),
	Radius(r) { }

Circle::Circle() :
	CenteredShape(),
	Radius(1) { } //default radius is 1

Circle::Circle(const Circle &a) :
	CenteredShape(a),
	Radius(a.Radius) { }

//functionality
double Circle::area(){
	return (M_PI * Radius * Radius);
}

double Circle::perimeter(){
	return 2 * M_PI * Radius;
}

double Circle::getRadius(){ return Radius; } //Radius getter
void Circle::setRadius(double r){ Radius = r; } //Radius setter