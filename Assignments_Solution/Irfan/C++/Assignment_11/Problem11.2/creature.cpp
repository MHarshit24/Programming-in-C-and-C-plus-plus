#include <iostream>

using namespace std;

/* 
CH-230-A
a11_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//PARENT CLASS
class Creature {
	public:
		Creature();
        ~Creature(){
            cout << "A creature has blinked out of exitence\n";
        }
		void run() const;
	protected:
		int distance;
};

Creature::Creature(): distance(10){
    cout << "A creature was made\n";
}    

void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}


//WIZARD CLASS
class Wizard : public Creature {
	private:
		int distFactor;
	public:
		Wizard();
        ~Wizard(){
            cout << "A Wizard goes to sleep\n";
        }
		void hover() const;
};

Wizard::Wizard() : distFactor(3){
    cout << "A wizard has graduated\n";
}  

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


//HAWK
class Hawk : public Creature {
    private:
        int flyFactor;
    public:
        Hawk();
        ~Hawk(){
            cout << "A Hawk faints\n";
        }
        void fly() const;
};

Hawk::Hawk() : flyFactor(2){
    cout << "A hawk has hatched\n";
}

void Hawk::fly() const{
    cout << "flying " << (flyFactor * distance) << " meters!\n";
}

//TROLL
class Troll : public Creature {
    private:
        int strideFactor;
    public:
        Troll();
        ~Troll(){
            cout << "a troll has turned to stone\n";
        }
        void stride() const;
};

Troll::Troll() : strideFactor(5){
    cout << "A troll has depetrified\n";
}

void Troll::stride() const{
    cout << "striding " << (strideFactor * distance) << " meters!\n";
}

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Hawk.\n";
    Hawk h;
    h.run();
    h.fly();

    cout << "\nCreating a Troll. \n";
    Troll t;
    t.run();
    t.stride();

    cout << "\n\n"; // space to see the destructors


    return 0;
} 