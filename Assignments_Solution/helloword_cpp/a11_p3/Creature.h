/*
CH-230-A
a11_p3.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <string> // defines standard C++ string class
using namespace std;

class Creature 
{
	public:
		Creature();
        // service method  
		void run() const;
        ~Creature();

	protected:
		int distance;
};

class Wizard : public Creature 
{
	public:
        Wizard();
		Wizard(int);
		void hover() const;
        ~Wizard();

	private: // data members are private
		int distFactor;
};

class Unicorn : public Creature 
{
    public:
        Unicorn();
        Unicorn(int);
        void fly() const;
        ~Unicorn();
        
    private: // data members are private
        int flying_capacity;
};

class Dragon : public Creature 
{
    public:
        Dragon();
        Dragon(int);
        void attack() const;
        ~Dragon();
        
    private: // data members are private
        int attacking_capacity;
};