/*
CH-230-A
a11_p5.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include <string>
#include "Shapes.h"
using namespace std;

Shape::Shape()
{
	name = "Default Shape";
}

Shape::Shape(const string& n) : 
name(n) 
{
	name = n;
}

Shape::Shape(const Shape& n)
{
	name = n.name;
}

CenteredShape::CenteredShape() : Shape()
{
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): 
Shape(n) 
{
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& n) : Shape(n)
{
	x = n.x;
	y = n.y;
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
        EdgesNumber=0;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& n) : CenteredShape(n)
{
	EdgesNumber = n.EdgesNumber;
}

Rectangle::Rectangle() : RegularPolygon()
{
	width = 0;
    height = 0;
}

Rectangle::Rectangle(const string& n, double nx, double ny, 
                     double nwidth, double nheight):
	RegularPolygon(n, nx, ny, 4)
{
	width = nwidth;
	height = nheight;
}

Rectangle::Rectangle(const Rectangle& n) : RegularPolygon(n)
{
	width = n.width;
	height = n.height;
}

Square::Square()
{}

Square::Square(const string& n, double nx, double ny, double nside):
	Rectangle(n, nx, ny, nside, nside)
{
	side = nside;
}

Square::Square(const Square& n) : Rectangle(n)
{
	side = n.side;
}

Circle::Circle()
{}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle(const Circle& n) : CenteredShape(n)
{
	Radius = n.Radius;
}

void Shape::setName(string& n) 
{
	name = n;
}

void CenteredShape::setX(double nx)
{
	x = nx;
}

void CenteredShape::setY(double ny)
{
	y = ny;
}

void RegularPolygon::setEdgesNumber(int nl)
{
	EdgesNumber = nl;
}

void Rectangle::setWidth(double nwidth)
{
	width = nwidth;
}

void Rectangle::setHeight(double nheight)
{
	height = nheight;
}

void Square::setSide(double nside)
{
	side = nside;
}

void Shape::printName() const 
{
	cout << name << endl;
}

double CenteredShape::getX()
{
	return x;
}

double CenteredShape::getY()
{
	return y;
}

int RegularPolygon::getEdgesNumber()
{
	return EdgesNumber;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

double Square::getSide()
{
	return side;
}

double Rectangle::area()
{
    return height * width;
}

double  Circle::area()
{
    return 3.14 * Radius * Radius;
}

double Rectangle::perimeter()
{
    return 2 * (height + width);
}

double  Circle::perimeter()
{
    return 2 * 3.14 * Radius;
}