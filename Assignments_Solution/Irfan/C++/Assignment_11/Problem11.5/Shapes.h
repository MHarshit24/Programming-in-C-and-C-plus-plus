/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <iostream>

using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
		//getters
		string getName();
		//setters
		void setName(string &);
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x;
		double y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		//getters
		double getX();
		double getY();
		//setters
		void setX(double);
		void setY(double);
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		//getters
		int getEdge();
		//setters
		void setEdge(int);
};

//A rectangle is a centered, regular polygon.
class Rectangle : public RegularPolygon {
	private:
		double width;
		double height;
	public:
		Rectangle(const string&, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);
		double perimeter(); //gives perimeter.
		double area(); //gives area
		//getters
		double getWidth();
		double getHeight();
		//setters
		void setWidth(double);
		void setHeight(double);
};

//A square is a rectangle.
class Square : public Rectangle {
	private:
		double side;
	public:
		Square(const string&, double, double, double);
		Square();
		Square(const Square&);
		double perimeter(); //gives perimeter
		double area(); //gives area
		//getters
		double getSide();
		//setters
		void setSide(double);
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape { 
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double area();
		double perimeter();
		//getters
		double getRadius();
		//setters
		void setRadius(double);
};
    
#endif