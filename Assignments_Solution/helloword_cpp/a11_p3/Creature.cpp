/*
CH-230-A
a11_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

//Default constructor
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature()
{
    cout << "Creature Destructor is called" << endl;
}  

Wizard::Wizard()
{
    cout << "Wizard empty constructor is called" << endl;
} 

Wizard::Wizard(int newdistFactor)
{
    distFactor = newdistFactor;
    //Writing a message to prove that the constructor is being called
    cout << "Wizard constructor is called" << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "Wizard Destructor is called" << endl;
}

Unicorn::Unicorn()
{
    cout << "Unicorn empty constructor is called" << endl;
} 

Unicorn::Unicorn(int newflying_capacity)
{
    flying_capacity = newflying_capacity;
    //Writing a message to prove that the constructor is being called
    cout << "Unicorn constructor is called" << endl;
}

void Unicorn::fly() const
{
    cout << "flying capacity is " << flying_capacity << endl;
}

Unicorn::~Unicorn()
{
    cout << "Unicorn Destructor is called" << endl;
}

Dragon::Dragon()
{
    cout << "Dragon empty constructor is called" << endl;
} 

Dragon::Dragon(int newattacking_capacity)
{
   attacking_capacity = newattacking_capacity;
   //Writing a message to prove that the constructor is being called 
   cout << "Dragon constructor is called" << endl;
}

void Dragon::attack() const
{
    cout << "attacking capacity is " << attacking_capacity << endl;
}

Dragon::~Dragon()
{
    cout << "Dragon Destructor is called" << endl;
}