/*
CH-230-A
a10_p2.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setColour(string& newcolour) {
	colour = newcolour;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(int newage) {
	age = newage;
}

void Critter::print() {
	cout << "I am " << name 
	<< ". I am " << age 
	<< " years old. My hunger level is " << hunger 
	<< " and my colour is " << colour 
	<< "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getAge() {
	return age;
}