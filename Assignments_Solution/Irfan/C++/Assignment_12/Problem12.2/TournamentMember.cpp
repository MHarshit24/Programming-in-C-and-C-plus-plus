#include "TournamentMember.h"
#include <cstring>
#include <iostream>

using namespace std;

//Constructors
TournamentMember::TournamentMember(char* nFst, char* nScnd, char* nDob){
    cout << "Constructing " << nFst << " " << nScnd << "..." << endl;
    strcpy(fstName, nFst);
    strcpy(scndName, nScnd);
    strcpy(dob, nDob);
}

TournamentMember::TournamentMember(){
    cout << "Constructing an empty TournamentMember..." << endl;
    fstName[0] = '\0';
    scndName[0] = '\0';
    dob[0] = '\0';
}

TournamentMember::TournamentMember(const TournamentMember& nT){
    cout << "Constructing " << nT.fstName << " " << nT.scndName << "..." << endl;
    strcpy(fstName, nT.fstName);
    strcpy(scndName, nT.scndName);
    strcpy(dob, nT.dob);
}

TournamentMember::~TournamentMember(){
    cout << fstName << " " << scndName << " Deconstructed" << endl; 
}

//Functionality
void TournamentMember::print(){
    cout << "Name: " << fstName
         << " " << scndName << endl; //pretty printing.
    cout << "DOB: " << dob << endl;
    cout << "Playing at " << location << endl;
}

void TournamentMember::moveLocation(char* L){
    strcpy( location, L);
}