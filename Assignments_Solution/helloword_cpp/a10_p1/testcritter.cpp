/*
CH-230-A
a10_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, colour;
	int hunger, age;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Colour: ";
	getline(cin, colour);
	c.setColour(colour);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Age: ";
	cin >> age;
	c.setAge(age);
	cout << "You have created:" << endl;
	c.print();
        return 0;
}