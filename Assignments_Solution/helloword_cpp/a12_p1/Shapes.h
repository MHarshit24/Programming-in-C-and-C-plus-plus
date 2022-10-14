/*
CH-230-A
a12_p1.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape 
{			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void setName(std::string& n);
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape 
{  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
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
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void setEdgesNumber(int nl);
		int getEdgesNumber();
};

class Hexagon : public RegularPolygon
{
    private:
        double side;
        std::string color;
    public:
        Hexagon();
        Hexagon(const std::string& n, double nx, double ny, std::string ncolor, double nside);
        Hexagon(const Hexagon&);
        ~Hexagon();
        void setColor(std::string& ncolor);
        void setSide(double);
        double getSide();
        double area();
        double perimeter();
};

class Circle : public CenteredShape 
{  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		void setRadius(double r);
		double getRadius();
		double area();
		double perimeter();
};
    
#endif