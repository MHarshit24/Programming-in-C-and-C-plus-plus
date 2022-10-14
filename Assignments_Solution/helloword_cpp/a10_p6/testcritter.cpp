/*
CH-230-A
a10_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Crittter.h"
using namespace std;

int main()
{
	//creating four instances
	Critter a;
	Critter b("ram");
	Critter c("ram", 8, 10);
	Critter d("ram", 8, 10, 7);
	Critter e("ram", 3, 4, 6, 9);
	// c.setHunger(2);
	// d.setHunger(2);
	a.print();
	b.print();
	c.print();
	d.print();
	e.print();
	return 0;
}