#include <iostream>
#include "Crittter.h"



//h2d function that returns int/10
double Critter::h2d(int a){
    return (double)a/10;
}

//h2i function that returns double*10
int Critter::h2i(double a){
    return (int)(a*10);
}

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
	hunger = h2d(newhunger); //modified internally
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
	return h2i(hunger); //modified internally
}

int Critter::getBordem(){
    return boredom;
}

//print
void Critter::print(){
    //hunger is printed as percentage without h2i
    //This is valid as the public interface remains the same.
	std::cout << "I am "
         << adj << " " << name 
         << ". My hunger level is " << hunger << "." << std::endl
         << "My torpor is " << torpor
         << " and I am bored by " << boredom << std::endl;
}