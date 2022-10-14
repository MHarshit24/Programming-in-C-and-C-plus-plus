// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

//Shape!
Shape::Shape(const string& n) : name(n) { }

Shape::Shape() : name("default0"){}

Shape::Shape(const Shape &s) : name(s.name){}

void Shape::printName() const {
	cout << name << endl;
}

//Centered Shape
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() :
	Shape(),
	x(0),
	y(0) { }

CenteredShape::CenteredShape(const CenteredShape &a) :
	Shape(a), 
	x(a.x),
	y(a.y) { }

//Regular Polygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
  CenteredShape(n,nx,ny){
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() :
	CenteredShape(), 
	EdgesNumber(3) { } //default polygon is a triangle

RegularPolygon::RegularPolygon(const RegularPolygon &a) :
	CenteredShape(a),
	EdgesNumber(a.EdgesNumber) { }

//Circle
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny){
	Radius = r;
}

Circle::Circle() :
	CenteredShape(),
	Radius(1) { } //default radius is 1

Circle::Circle(const Circle &a) :
	CenteredShape(a),
	Radius(a.Radius) { }

//Hexagon
Hexagon::Hexagon(const string &n, double nx, double ny, double nside, string ncolor) :
  RegularPolygon(n, nx, ny, 6),
  side(nside),
  color(ncolor) { }

//default hexagon has side length 1, color Gray
Hexagon::Hexagon() :
  RegularPolygon(),
  side(1),
  color("Gray") { }

Hexagon::Hexagon(const Hexagon &h) :
  RegularPolygon(h),
  side(h.side),
  color(h.color) { }

//functionality
double Hexagon::perimeter(){
  return 6*side;
}

double Hexagon::area(){
  return side*side*3*sqrt(3)/2;
}

//getters
double Hexagon::getSide(){
  return side;
}

string Hexagon::getColor(){
  return color;
}

//setters
void Hexagon::setSide(double ns){
  side = ns;
}

void Hexagon::setColor(string nc){
  color = nc;
}
