#ifndef TMEM
#define TMEM

#include <iostream>
#include <cstring>

class TournamentMember {
    private:
        static char location[36]; //location of tournament
        static int nwins; //number of wins
        static int ngames; //number of games
        char fstName[36];
        char scndName[36];
        char dob[11];
    public:
    //constructors and destructors
        TournamentMember(char[], char[], char[]);
        TournamentMember();
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
    //functionality
        void print(); //prints the member
        static void moveLocation(char*); //sets the new location
    //getters and and setters for object members
        char* getFstName() { return fstName; }
        char* getScndName() { return scndName; }
        char* getDob() { return dob; }
        void setFstName(char* ns) { strcpy(fstName, ns); }
        void setScndName(char* ns) { strcpy(scndName, ns); }
        void setDob(char* ns) { strcpy(dob, ns); }
};


#endif