#include <iostream>
#include "City.h"

using namespace std;

City::City(string n, string m, int p, double a)
{
    name = n;
    mayor = m;
    pop = p;
    area = a;
}

//getters
string City::getName(){
    return name;
}
string City::getMayor(){
    return mayor;
}
int City::getPop(){
    return pop;
}
double City::getArea(){
    return area;
}

//setters
void City::setName(string n){
    name = n;
}

void City::setMayor(string m){
    mayor = m;
}

void City::setPop(int p){
    pop = p;
}

void City::setArea(double a){
    area = a;
}