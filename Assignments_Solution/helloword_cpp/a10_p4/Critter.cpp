/*
CH-230-A
a10_p4.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Critter.h"
using namespace std;
//defining methods
Critter::Critter ()
{
	name = "default_critter";
	hunger = boredom = 0;	
	height = 5;
	cout << "Constructor one is being called" << endl;
}
Critter::Critter (string newname)
{
	name = newname;
	hunger = boredom = 0;
	height = 5;
	cout << "Constructor two is being called" << endl;
}
Critter::Critter (string newname, int newhunger, int newboredom, double newheight)
{
	name = newname;
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
	cout << "Constructor three is being called" << endl;
}
void Critter::setName (string& newname)
{
	name = newname;
}
void Critter::setHunger (int newhunger)
{
	hunger = newhunger;
}
void Critter::print()
{
	cout << "I am " << name 
	<< ". My hunger level is " << hunger 
	<< ". My height is " << height 
	<< ". My boredom is " << boredom 
	<< "." << endl;
}
int Critter::getHunger ()
{
	return hunger;
}