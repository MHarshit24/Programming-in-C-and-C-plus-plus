/*
CH-230-A
a11_p4.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Creature.h"
using namespace std;

int main()
{
    int input;
    string name;
    while(name != "quit")
    {
        cout << "Enter a creature name(Wizard, Unicorn, Dragon) or else enter quit: ";
        cin >> name;
        if (name == "Wizard")
        {
            cout << "\nCreating a Wizard.\n";
            cout << "Enter distance factor of the wizard: ";
            cin >> input;
            Wizard *w;
            w = new Wizard(input);
            w -> run();
            w -> hover();
            delete w;
        }
        else if (name == "Unicorn")
        {
            cout << "\nCreating a Unicorn.\n";
            cout << "Enter flying capacity of the unicorn: ";
            cin >> input;
            Unicorn *u;
            u = new Unicorn(input);
            u -> run();
            u -> fly();
        }
        else if (name == "Dragon")
        {
             cout << "\nCreating a Dragon.\n";
             cout << "Enter attacking capacity of the dragon: ";
            cin >> input;
            Dragon *d;
            d = new Dragon(input);
            d -> run();
            d -> attack();
        }
        else
        {
            break;
        }
    }
    cout << "Your execution has stopped" << endl;
    return 0;
}