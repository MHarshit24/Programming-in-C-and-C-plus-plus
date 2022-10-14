/*
CH-230-A
a12_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    char firstname[] = "Harshit\0";
    char lastname[] = "Mutha";
    char date_of_birth[] = "2004-01-08";
    string nationality = "Indian";
    //Creating instance
    TournamentMember TM(firstname, lastname, date_of_birth, nationality, 17);
    string location = "Bremen";
    TM.setLocation(location);
    TM.print();
    string position = "Forward";
    string foot = "Right";
    Player p(firstname, lastname, date_of_birth, nationality, 17, 24, position, 2, foot);
    p.printplayer();
    return 0;
}