/*
CH-230-A
a10_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "City.h"
using namespace std;
//Defining methods
void City::setName(string& newname)
{
	name = newname;
}
void City::setName_of_mayor(string& newname_of_mayor)
{
	name_of_mayor = newname_of_mayor;
}
void City::setInhabitants(int newinhabitants)
{
	inhabitants = newinhabitants;
}
void City::setArea(float newarea)
{
	area = newarea;
}
void City::print()
{
    cout << "The name of the city is " << name 
    << " and its mayor is " << name_of_mayor 
    << ". It has " << inhabitants 
    << " inhabitants and has an area of " << area 
    << " square kilometers." << endl; 
}; 
int City::getInhabitants()
{
	return inhabitants;
}
float City::getArea()
{
	return area;
}

City::City(const City& f)
{
	name = f.name;
}