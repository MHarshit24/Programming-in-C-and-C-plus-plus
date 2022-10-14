#include <iostream>
#include "TournamentMember.h"

using namespace std;

/* 
CH-230-A
a12_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


//allocate static variables.
char TournamentMember::location[36];
int TournamentMember::nwins = 0;
int TournamentMember::ngames = 0;

int main(){
    //setup
    char A[] = "John"; //John
    char B[] = "Smith"; //Smith
    char C[] = "Matthew"; //Mathew
    char dob[] = "1970-01-01"; //1970-01-01
    char Barc[] = "Barcelona"; // Barcelona
    char Hamb[] = "Hamburg"; // Hamburg

    char three[] = "CR3";
    char two[] = "CR2";
    char one[] = "CR1";
    char forw[] = "Forward";
    char mid[] = "Mid";
    char back[] = "Back";

    char left[] = "Left";
    char right[] = "right";
    TournamentMember::moveLocation(Barc);

    Player T1(A, B, dob, three, forw, right, 3);
    T1.print();
    cout << endl;

    Player T2(A, C, dob, two , mid, left, 2);
    T2.print();
    cout << endl;

    Player T3(B, C, dob, one, back, right, 1);
    T3.print();
    cout << endl;

    TournamentMember::moveLocation(Hamb);
    T3.print();
    cout << endl;
    T3.print();
    cout << endl;
    T3.print();
    cout << endl;
    
}