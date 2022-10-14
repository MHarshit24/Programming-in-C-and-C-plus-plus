#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
    std::string adj; //created for assignment
	int torpor; //created for assignment
    double hunger;
	int boredom;
	double height;


	/* private mapping functions */
	//hunger to double
	double h2d(int a);
	//hunger to int
	int h2i(double a);

public: // business logic methods are public

	//Constructors
	Critter();
	Critter(std::string n);
	Critter(std::string n, int hunger, int boredom, double h);

	// setter methods
	void setName(std::string& newname);
    void setAdj(std::string& newadj); //
    void setTorpor(int newtorpor); //
    void setHunger(int newhunger);
	void setBoredom(int newboredom);

	// getter method
    std::string getAdj();
    int getTorpor(); //
	int getHunger(); //
    int getBordem();

	// service method
	void print();
};