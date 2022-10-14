/*
CH-230-A
a12_p3.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>

class TournamentMember
{
    private:
        char firstname[36];
        char lastname[36];
        char date_of_birth[11];
        std::string nationality;
        int age;
        //Static property
        static std::string location;
    public: 
        TournamentMember();
        TournamentMember(char [], char [], char [], std::string& newnationality, int);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        //setter method
        void setFirstname(char);
        void setLastname(char);
        void setDate_of_birth(char);
        void setNationality(std::string& newnationality);
        void setAge(int newage);
        void setLocation(std::string& newlocation);
        void print(); //Service method
        //getter method
        char getFirstname();
        char getLastname();
        char getDate_of_birth();
        int getAge();
};

//Inline setter and getter method
inline void TournamentMember::setFirstname(char newfirstname)
{
    firstname[36] = newfirstname;
}

inline void TournamentMember::setLastname(char newlastname)
{
    lastname[36] = newlastname;
}

inline void TournamentMember::setDate_of_birth(char newdate_of_birth)
{
    date_of_birth[11] = newdate_of_birth;
}

inline void TournamentMember::setNationality(std::string& newnationality)
{
	nationality = newnationality;
}

inline void TournamentMember::setAge(int newage)
{
    age = newage;
}

inline void TournamentMember::setLocation(std::string& newlocation)
{
    location = newlocation;
}

inline char TournamentMember::getFirstname()
{
    return firstname[36];
}

inline char TournamentMember::getLastname()
{
    return lastname[36];
}

inline char TournamentMember::getDate_of_birth()
{
    return date_of_birth[11];
}

inline int TournamentMember::getAge()
{
    return age;
}

class Player : public TournamentMember
{
    private:
        int number;
        std::string position;
        int number_of_goals;
        std::string foot;
    public:
        Player();
        Player(char newfirstname[], char newlastname [],
               char newdate_of_birth [], std::string& newnationality, 
               int newage, int newnumber, std::string& newposition, 
               int newnumber_of_goals, std::string& newfoot);
        Player(const Player&);
        ~Player();
        void setNumber(int);
        void setPosition(std::string& newposition);
        void setFoot(std::string& newfoot);
        int getNumber();
        void printplayer();
        int increment();
};

inline void Player::setNumber(int newnumber)
{
    number = newnumber;
}

inline void Player::setPosition(std::string& newposition)
{
    position = newposition;
}

inline void Player::setFoot(std::string& newfoot)
{
    foot = newfoot;
}

inline int Player::getNumber()
{
    return number;
}