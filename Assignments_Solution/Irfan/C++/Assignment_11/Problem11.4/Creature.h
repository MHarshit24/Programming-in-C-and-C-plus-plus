#include <iostream>

using namespace std;

//PARENT CLASS
class Creature {
	protected:
		int distance;
	public:
		Creature();
        ~Creature();
		void run() const;
};

//WIZARD CLASS
class Wizard : public Creature {
	private:
		int distFactor;
	public:
		Wizard();
        ~Wizard();
		void hover() const;
};

//HAWK
class Hawk : public Creature {
    private:
        int flyFactor;
    public:
        Hawk();
        ~Hawk();
        void fly() const;
};

//TROLL
class Troll : public Creature {
    private:
        int strideFactor;
    public:
        Troll();
        ~Troll();
        void stride() const;
};