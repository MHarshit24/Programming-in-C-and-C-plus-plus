#include <iostream>
#include "Creature.h"

using namespace std;

/* 
CH-230-A
a11_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main()
{ 
    //simple test code.
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Hawk.\n";
    Hawk h;
    h.run();
    h.fly();

    cout << "\nCreating a Troll. \n";
    Troll t;
    t.run();
    t.stride();

    cout << "\n\n"; // space to see the destructors


    return 0;
} 