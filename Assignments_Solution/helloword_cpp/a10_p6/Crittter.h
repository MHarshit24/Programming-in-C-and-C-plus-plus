/*
CH-230-A
a10_p6.h
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
	double hunger;
	int boredom;
	double height;
	double thirst;
	public:
	Critter ();
	Critter (std::string newname);
	Critter (std::string newname, int newhunger, int newboredom, double newheight = 10);
	Critter (std::string newname, int newhunger, int newboredom, double thirst, double newheight);
	void setName (std::string& newname);
	void setHunger (int newhunger);
	void setThirst (double newthirst);
	int getHunger ();
	double getThirst ();
	void print ();
};
