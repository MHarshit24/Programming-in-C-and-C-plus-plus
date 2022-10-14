/*
CH-230-A
a10_p2.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	std::string colour;
	int age;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setColour(std::string& newcolour);
	void setHunger(int newhunger);
	void setAge(int newage);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	int getAge();
	// service method
	void print();
};