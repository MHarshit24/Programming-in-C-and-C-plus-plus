#include "TournamentMember.h"
#include <cstring>
#include <iostream>

using namespace std;

//Tournament Member
//constructors
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


//Player
//Constructors
Player::Player(char* nFst, char* nScnd, char* nDob,
               char* nNum, char* nPos, char* nFoot, int ng) :
    TournamentMember(nFst, nScnd, nDob) {
    cout << "Parametric Player constructor called!" << endl;
    strcpy(number, nNum);
    strcpy(position, nPos);
    strcpy(footedness, nFoot);
    ngoals = ng;
}

Player::Player() : TournamentMember() {
    cout << "Default Player constructor called!" << endl;
    number[0] = '\0';
    position[0] = '\0';
    footedness[0] = '\0';
    ngoals = 0;
}

Player::Player(const Player& nP) : TournamentMember(nP) {
    cout << "Copy Player constructor called!" << endl;
    strcpy(number, nP.number);
    strcpy(position, nP.position);
    strcpy(footedness, nP.footedness);
    ngoals = nP.ngoals;
}

//functionality
void Player::print(){
    TournamentMember::print();
    cout << "is Player number " << number << endl;
    cout << "played at " << position << endl;
    cout << "and has scored " << ngoals << " goal(s) so far!" << endl;
}

//increments ngoals
void Player::goal(){
    ngoals++;
}



    //     Player(char[], char[], char[], char[], char[], char[], int);
    //     Player();
    //     Player(const Player&);
    // //functionality
    //     void print();
    //     void goal(); //increments ngoals (number of goals).