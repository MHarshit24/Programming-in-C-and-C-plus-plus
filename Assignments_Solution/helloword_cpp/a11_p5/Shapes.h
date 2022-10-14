/*
CH-230-A
a11_p5.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape 
{			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void setName(string& n);
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape 
{  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		void setX(double nx);
		void setY(double ny);
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape 
{ // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int nl);
		int getEdgesNumber();
};

class Rectangle : public RegularPolygon 
{
	private:
		double width;
		double height;
    public:
        Rectangle();
        Rectangle(const string& n, double nx, double ny, 
                  double nwidth, double nheight);
        Rectangle(const Rectangle&);
		void setWidth(double nwidth);
		void setHeight(double nheight);
		double getWidth();
		double getHeight();
		double area();
		double perimeter();
};

class Square : public Rectangle 
{
	private:
		double side;
    public:
        Square();
        Square(const string& n, double nx, double ny, double nside);
        Square(const Square&);
		void setSide(double nside);
		double getSide();
};

class Circle : public CenteredShape 
{  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(double r);
		double getRadius();
		double area();
		double perimeter();
};
    
#endif