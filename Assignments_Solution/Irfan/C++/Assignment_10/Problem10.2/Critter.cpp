#include <iostream>
#include "Critter.h"

using namespace std;

//setter definitions ahead
void Critter::setName(string& newname){
	name = newname;
}

void Critter::setAdj(string& newadj){
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

string Critter::getAdj(){
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
	cout << "I am "
         << adj << " " << name 
         << ". My hunger level is " << hunger << "." << endl
         << "My torpor is " << torpor
         << " and I am bored by " << boredom << endl;
}