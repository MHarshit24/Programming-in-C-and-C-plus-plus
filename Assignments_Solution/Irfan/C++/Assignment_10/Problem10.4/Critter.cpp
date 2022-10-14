#include <iostream>
#include "Critter.h"

//Constructors
Critter::Critter(){
    name = "default_critter";
    height = 5;
    hunger = 0;
    boredom = 0;
    torpor = 0;
}

Critter::Critter(std::string n){
    name = n;
    height = 5;
    hunger = 0;
    boredom = 0;
    torpor = 0;

}

Critter::Critter(std::string n, int h, int b, double hi){
    name = n;
    hunger = h;
    boredom = b;
    height = hi;
}


//setter definitions ahead
void Critter::setName(std::string& newname){
	name = newname;
}

void Critter::setAdj(std::string& newadj){
    adj = newadj;
}

void Critter::setTorpor(int newtorpor){
    torpor = newtorpor;
}

void Critter::setHunger(int newhunger){
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom){
    boredom = newboredom;
}

//getter definitions ahead.

std::string Critter::getAdj(){
    return adj;
}

int Critter::getTorpor(){
    return torpor;
}

int Critter::getHunger(){
	return hunger;
}

int Critter::getBordem(){
    return boredom;
}

//print
void Critter::print(){
	std::cout << "I am "
         << adj << " " << name 
         << ". My hunger level is " << hunger << "." << std::endl
         << "My torpor is " << torpor
         << " and I am bored by " << boredom << std::endl;
}