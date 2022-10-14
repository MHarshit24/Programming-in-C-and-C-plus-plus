#include <iostream>
#include "Creature.h"

using namespace std;

//Creature definitions
Creature::Creature(): distance(10){
    cout << "A creature was made\n";
}    

Creature::~Creature(){
    cout << "A creature has blinked out of exitence\n";
}

void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}

//Wizard definitions
Wizard::Wizard() : distFactor(3){
    cout << "A wizard has graduated\n";
}

Wizard::~Wizard(){
    cout << "A Wizard goes to sleep\n";
}

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Hawk definitions
Hawk::Hawk() : flyFactor(2){
    cout << "A hawk has hatched\n";
}

Hawk::~Hawk(){
    cout << "A Hawk faints\n";
}

void Hawk::fly() const{
    cout << "flying " << (flyFactor * distance) << " meters!\n";
}


//TROLL definitions
Troll::Troll() : strideFactor(5){
    cout << "A troll has depetrified\n";
}

Troll::~Troll(){
    cout << "a troll has turned to stone\n";
}

void Troll::stride() const{
    cout << "striding " << (strideFactor * distance) << " meters!\n";
}