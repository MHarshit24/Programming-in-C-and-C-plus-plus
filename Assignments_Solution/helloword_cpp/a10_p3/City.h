/*
CH-230-A
a10_p3.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <string>
class City
{
    private:// data members are private
    std::string name;
    std::string name_of_mayor;
    float area;
    int inhabitants;
    public:// business logic methods are public
	// setter methods
    void setName(std::string& newname);
    void setName_of_mayor(std::string& newname_of_mayor);
    void setArea(float newarea);
    void setInhabitants(int newinhabitants);
    // getter method
    float getArea();
    int getInhabitants();
    void print();
};