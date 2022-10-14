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
        virtual void print(); //prints the member
        static void moveLocation(char*); //sets the new location
    //getters and and setters for object members
        char* getFstName() { return fstName; }
        char* getScndName() { return scndName; }
        char* getDob() { return dob; }
        void setFstName(char* ns) { strcpy(fstName, ns); }
        void setScndName(char* ns) { strcpy(scndName, ns); }
        void setDob(char* ns) { strcpy(dob, ns); }
};

class Player : public TournamentMember {
    private:
        char number[6]; // numbers like 'CR7'
        char position[36];
        char footedness[36];
        int ngoals;
    public:
    //constructors and destructors   
        Player(char[], char[], char[], char[], char[], char[], int);
        Player();
        Player(const Player&);
    //functionality
        void print();
        void goal(); //increments ngoals (number of goals).
    //getters and setters
        char* getNumber() { return number; }
        char* getPosition() { return position; }
        char* getFoot() { return footedness; }
        void setNumber(char* n) { strcpy(number,n); }
        void setPosition(char* p) { strcpy(position, p); }
        void setFoot(char* f) { strcpy(footedness, f); }  
};


#endif