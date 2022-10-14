#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

//Constructors and Destructors

//constant pointer but data not constant, ease of writing code.
Vector::Vector(double* const& nv,const int ns){
    size = ns;
    vals = new double[size];
    for(int i = 0; i < size; i++){
        vals[i] = nv[i];
    }
}

Vector::Vector() :
    vals(NULL),
    size(0) { }

Vector::Vector(const Vector& nV){
    size = nV.size;
    vals = new double[size];
    for(int i = 0; i < size; i++){
        vals[i] = nV.vals[i];
    }
}

Vector::~Vector() {
    delete[] vals;
}

//functionality

//prints without endl at the end.
void Vector::print(){
    for(int i = 0; i < size; i++)
        cout << vals[i] << " "; 
}

//Norm of a vector.
double Vector::norm(){
    double result = 0;
    for(int i = 0; i < size; i++)
        result += vals[i]*vals[i];
    return sqrt(result);
}

//returns default vector (empty) on failed calls.
Vector Vector::add(const Vector V1) const{
    //error checking
    if(size != V1.size || size < 0 || V1.size < 0){
        return Vector();
    }

    //setup
    double* const nvals = new double[size];
    for(int i = 0; i < size; i++)
        nvals[i] = vals[i] + V1.vals[i];
    
    return Vector(nvals, size);
}

//sub does "this - argument"
Vector Vector::sub(const Vector V1) const{
    //error checking
    if(size != V1.size || size < 0 || V1.size < 0){
        return Vector();
    }

    //setup
    double* const nvals = new double[size];
    for(int i = 0; i < size; i++)
        nvals[i] = vals[i] - V1.vals[i];

    return Vector(nvals, size);
}

//returns 0 if there is an error in the arguments given.
double Vector::dot(const Vector V1) const{
    //error checking
    if(size != V1.size || size < 0 || V1.size < 0){
        return 0;
    }

    //setup
    double result = 0;
    for(int i = 0; i < size; i++)
        result += vals[i] * V1.vals[i];

    return result;
}

//getters
double* Vector::getV(){
    return vals;
}

int Vector::getSize(){
    return size;
}


//setters
void Vector::setV(double* nvals){
    vals = nvals;
}

void Vector::setSize(int nsize){
    size = nsize;
}

void Vector::set(double* nvals, int nsize){
    vals = nvals;
    size = nsize;
}

