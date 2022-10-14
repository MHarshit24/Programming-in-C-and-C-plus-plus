/*
CH-230-A
a12_p2.cpp
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
    return 0;
}