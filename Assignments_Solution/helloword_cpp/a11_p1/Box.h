/*
CH-230-A
a11_p1.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
using namespace std;
class Box
{
    private:// data members are private
    double height;
    double width;
    double depth;
    public:
    Box();
    Box(double h, double w, double d);
    Box(const Box&);
    ~Box();
    //setter method
    void setHeight(double h);
    void setWidth(double w);
    void setDepth(double d);
    //getter method
    double getHeight() const;
    double getWidth() const;
    double getDepth() const;
    void print();
};