/*
CH-230-A
a12_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"
#include <string.h>
using namespace std;

//Default constructor
TournamentMember::TournamentMember()
{
    strcpy(firstname, "default_firstname");
    strcpy(lastname, "default_lastname");
    strcpy(date_of_birth, "undefined");
    nationality = "undefined";
    cout << "Default Constructor is called" << endl;
}

//Parametric constructor
TournamentMember::TournamentMember(char newfirstname[], char newlastname [],
                                   char newdate_of_birth [], string& newnationality, 
                                   int newage)
{
    strcpy(firstname, newfirstname);
    strcpy(lastname, newlastname);
    strcpy(date_of_birth, newdate_of_birth);
    nationality = newnationality;
    age = newage;
    cout << "Parametric constructor is called" << endl;
}

//Copy constructor
TournamentMember::TournamentMember(const TournamentMember &TM)
{
    strcpy(firstname, TM.firstname);
    strcpy(lastname, TM.lastname);
    strcpy(date_of_birth, TM.date_of_birth);
    cout << "Copy constructor is called" << endl;
}

//Destructor
TournamentMember::~TournamentMember()
{
    cout << "Destructor is called" << endl;
}

string TournamentMember::location = "City";

void TournamentMember::print()
{
    cout << "The full name of the person is " << firstname 
    << " " << lastname 
    << ". The person's date of birth is " << date_of_birth 
    << ", so his/her current age is " << age 
    << " and he/she is a/an " << nationality 
    << ". His/Her current location is " << location 
    << "." << endl;
}

Player::Player() : TournamentMember()
{
    position = "undefined";
    foot = "undefined";
    cout << "Player default constructor is called";
}

Player::Player(char newfirstname[], char newlastname [],
               char newdate_of_birth [], std::string& newnationality, 
               int newage, int newnumber, std::string& newposition, 
               int newnumber_of_goals, std::string& newfoot) : 
TournamentMember (newfirstname, newlastname, newdate_of_birth, newnationality, newage)
{
    number = newnumber;
    position = newposition;
    number_of_goals = newnumber_of_goals;
    foot = newfoot;
    cout << "Player Paramatric constructor is called." << endl;
}

Player::Player(const Player& p) : TournamentMember(p)
{
    cout << "Player copy constructor is called" << endl;
}

Player::~Player()
{
    cout << "Player destructor is called" << endl;
}

void Player::printplayer()
{
    cout << "This is a player numbered " << number 
    << ". Position is " << position 
    << ". Number of goals scored is " << number_of_goals 
    << ". His foot is " << foot 
    << "."  << endl;  
}

int Player::increment()
{
    number_of_goals++;
    return number_of_goals;
}        