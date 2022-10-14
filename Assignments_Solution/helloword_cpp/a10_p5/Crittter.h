/*
CH-230-A
a10_p5.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <string>
// defines standard C++ string class
double double_hungern(int hunger);
int inthunger (double doublehunger);
class Critter
{
	private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	public:
	Critter ();
	Critter (std::string newname);
	Critter (std::string newname, int newhunger, int newboredom, double newheight = 10);
	void setName (std::string& newname);
	void setHunger (int newhunger);
	int getHunger ();
	void print ();
};
