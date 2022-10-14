#include <iostream>
#include "Creature.h"

using namespace std;

/* 
CH-230-A
a11_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main()
{ 
    //variables
    Wizard *w;
    Hawk *h;
    Troll *t;

    string inp = "";
    while(inp != "quit"){
        cin >> inp;
        //using ifs since switch wont work with strings :C
        if(inp == "wizard"){
            w = new Wizard;
            w->hover();
            delete w;
        }
        else if(inp == "object1"){
            h = new Hawk;
            h->fly();
            delete h;
        }
        else if(inp == "object2"){
            t = new Troll;
            t->stride();
            delete t;
        }
        else if(inp == "quit"){ } //in order to avoid else.
        else {
            cout << "Wrong input, do one of (wizard, object1, object2)\n";
        }
    }

    return 0;
} 