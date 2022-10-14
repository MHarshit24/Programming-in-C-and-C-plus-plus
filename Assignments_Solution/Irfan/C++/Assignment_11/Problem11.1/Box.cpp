#include <iostream>
#include "Box.h"

using namespace std;

//Constructors!
Box::Box(){
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double h, double w, double d){
    height = h;
    width = w;
    depth = d;
}

Box::Box(const Box& b){
    height = b.height;
    width = b.width;
    depth = b.depth;
}

//Getters
double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}

//setters
void Box::setHeight(double h){
    height = h;
}

void Box::setWidth(double w){
    width = w;
}

void Box::setDepth(double d){
    depth = d;
}

//Functionality
double Box::volume(){
    return height*width*depth;
}
