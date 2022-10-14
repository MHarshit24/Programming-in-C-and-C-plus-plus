/*
CH-230-A
a11_p2.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
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

//Default constructor
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature()
{
    cout << "Creature Destructor is called" << endl;
}

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

Wizard::Wizard()
{
    cout << "Wizard empty constructor is called" << endl;
} 

Wizard::Wizard(int newdistFactor)
{
    distFactor = newdistFactor;
    //Writing a message to prove that the constructor is being called
    cout << "Wizard constructor is called" << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "Wizard Destructor is called" << endl;
}

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

Unicorn::Unicorn()
{
    cout << "Unicorn empty constructor is called" << endl;
} 

Unicorn::Unicorn(int newflying_capacity)
{
    flying_capacity = newflying_capacity;
    //Writing a message to prove that the constructor is being called
    cout << "Unicorn constructor is called" << endl;
}

void Unicorn::fly() const
{
    cout << "flying capacity is " << flying_capacity << endl;
}

Unicorn::~Unicorn()
{
    cout << "Unicorn Destructor is called" << endl;
}

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

Dragon::Dragon()
{
    cout << "Dragon empty constructor is called" << endl;
} 

Dragon::Dragon(int newattacking_capacity)
{
   attacking_capacity = newattacking_capacity;
   //Writing a message to prove that the constructor is being called 
   cout << "Dragon constructor is called" << endl;
}

void Dragon::attack() const
{
    cout << "attacking capacity is " << attacking_capacity << endl;
}

Dragon::~Dragon()
{
    cout << "Dragon Destructor is called" << endl;
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w(3);
    w.run();
    w.hover();

    cout << "\nCreating another Wizard.\n";
    //Creating another instance for wizard
    Wizard wiz(9);
    w.run();
    wiz.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u(2);
    u.run();
    u.fly();

    cout << "\nCreating another Unicorn.\n";
    //Creating another instance for unicorn
    Unicorn uni(4);
    u.run();
    uni.fly();

    cout << "\nCreating a Dragon.\n";
    Dragon d(3);
    d.run();
    d.attack();

    cout << "\nCreating another Dragon.\n";
    //Creating another instance for dragon
    Dragon drag(8);
    d.run();
    drag.attack();

    return 0;
} 