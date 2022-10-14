/*
CH-230-A
a12_p1.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
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

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape() : Shape()
{
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
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
        EdgesNumber = 0;
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

//Defaukt constructor
Hexagon::Hexagon() : RegularPolygon()
{
    color = "Default Color";
    side = 0;
}

//Parameteric Constructor
Hexagon::Hexagon(const string& n, double nx, double ny, string ncolor, double nside) :
    RegularPolygon(n, nx, ny, 6)
{
    color = ncolor;
    side = nside;
}

//Copy Constructor
Hexagon::Hexagon(const Hexagon& n) : RegularPolygon(n)
{
    color = n.color;
    side = n.side;
}

//Destructor
Hexagon::~Hexagon()
{
    cout << "Destructor is called" << endl;
}

//Setter Method
void Hexagon::setColor(string& ncolor)
{
    color = ncolor;
}

void Hexagon::setSide(double nside)
{
    side = nside;
}

//Getter method
double Hexagon::getSide()
{
    return side;
}

double Hexagon::area()
{
    return ((3 * sqrt(3) * (side * side)) / 2);
}

double Hexagon::perimeter()
{
    return 6 * side;
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