#include <iostream>
#include "TournamentMember.h"

using namespace std;

/* 
CH-230-A
a12_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


//allocate static variables.
char TournamentMember::location[36];
int TournamentMember::nwins = 0;
int TournamentMember::ngames = 0;

int main(){
    //setup
    char A[] = {'J', 'o', 'h', 'n', '\0'};
    char B[] = { 'S', 'm', 'i', 't', 'h', '\0'};
    char C[] = {'M','a', 't', 't', 'h', 'e', 'w', '\0'};
    char dob[] = {'1', '9', '7', '0', '-', '0', '1', '-', '0', '1', '\0'};
    char Barc[] =  {'B','a','r','c','e','l','o','n','a', '\0'};
    TournamentMember::moveLocation(Barc);

    TournamentMember T1(A, B, dob);
    T1.print();
    cout << endl;

    TournamentMember T2(A, C, dob);
    T2.print();
    cout << endl;
}