/*
CH-230-A
a13_p8.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Motor
{
    public:
        Motor(){throw "This motor has problems";}
};

class Car
{
    public:
        Car(){Motor motor;}
};

class Garage
{
    public:
        Garage()
        {
            try
            {
                Car RollsRoyce;
            }
            catch(const char * ch)
            {
                cerr << "Caught in Garage class: " << ch << endl;
                throw "The car in this garage has problems with the motor";
            }
        }
};

int main()
{
    try
    {
        Garage garage;
    }
    catch(const char* character)
    {
        cerr << "Caught in main: " << character << endl;
    }
    return 0;
}