/*
CH-230-A
a11_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w(3);
    w.run();
    w.hover();

    cout << "\nCreating another Wizard.\n";
    //Creating another instance for wizard
    Wizard wiz(9);
    w.run();
    wiz.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u(2);
    u.run();
    u.fly();

    cout << "\nCreating another Unicorn.\n";
    //Creating another instance for unicorn
    Unicorn uni(4);
    u.run();
    uni.fly();

    cout << "\nCreating a Dragon.\n";
    Dragon d(3);
    d.run();
    d.attack();

    cout << "\nCreating another Dragon.\n";
    //Creating another instance for dragon
    Dragon drag(8);
    d.run();
    drag.attack();

    return 0;
} 