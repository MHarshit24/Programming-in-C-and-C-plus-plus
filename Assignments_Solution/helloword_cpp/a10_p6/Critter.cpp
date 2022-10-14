/*
CH-230-A
a10_p6.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Crittter.h"
using namespace std;
//defining methods
double double_hunger(int hunger)
{
	double doublehunger = hunger / 10.0;
	return doublehunger;
}
int int_hunger (double doublehunger)
{
	int temphunger = int (doublehunger * 10);
	return temphunger;
}
Critter::Critter ()
{
	name = "default_critter";
	hunger = double_hunger(0);
	thirst = hunger;
	boredom = 0;	
	height = 5;
	cout << "Constructor one is being called" << endl;
}
Critter::Critter (string newname)
{
	name = newname;
	hunger = double_hunger(0);
	thirst = hunger;
	boredom = 0;
	height = 5;
	cout << "Constructor two is being called" << endl;
}
Critter::Critter (string newname, int newhunger, int newboredom, double newheight)
{ 
	name = newname;
	hunger = double_hunger(newhunger);
	thirst = hunger;
	boredom = newboredom;
	height = newheight;
	cout << "Constructor three is being called" << endl;
}
Critter::Critter (string newname, int newhunger, int newboredom, double newthirst, double newheight)
{ 
	name = newname;
	hunger = double_hunger(newhunger);
	thirst = newthirst;
	boredom = newboredom;
	height = newheight;
	cout << "Constructor four is being called" << endl;
}
void Critter::setName (string& newname)
{
	name = newname;
}
void Critter::setHunger (int newhunger)
{
	hunger = int_hunger(newhunger);
}
void Critter::setThirst (double newthirst)
{
	thirst = newthirst;
}
void Critter::print()
{
	cout << "I am " << name 
	<< ". My hunger level is " << int_hunger (hunger)
	<< " and thirst level is " << thirst 
	<< ". My height is " << height 
	<< ". My boredom is " << boredom 
	<< "." << endl;
}
int Critter::getHunger ()
{
	return hunger;
}
double Critter::getThirst ()
{
	return thirst;
}