/*
CH-230-A
a11_p1.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
using namespace std;
Box::Box()
{
    height = width = depth = 0;
}//empty constructor
Box::Box(double h, double w, double d)
{
    height = h;
    width = w;
    depth = d;
}
Box::Box(const Box& B)
{
    height = B.getHeight();
    width = B.getWidth();
    depth = B.getDepth();
}//copy constructor
Box::~Box()
{}//destructor
void Box::setHeight(double h)
{
    height = h;
}
void Box::setWidth(double w)
{
    width = w;
}
void Box::setDepth(double d)
{
    depth = d;
}
void Box::print()
{
    cout << "Volume: " << height * width * depth << endl;
}
double Box::getHeight() const
{
    return height;
}
double Box::getWidth() const
{
    return width;
}
double Box::getDepth() const
{
    return depth;
}