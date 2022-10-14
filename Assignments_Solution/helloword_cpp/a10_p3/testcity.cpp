/*
CH-230-A
a10_p3.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"
using namespace std;
int main()
{
    City Bremen, Paris, London;
    string name, name_of_mayor, name_of_city;
    int inhabitants;
    float area;
    cout << "Enter the name of the city: ";
    getline(cin, name_of_city);
    if (name_of_city == "Bremen")
    {
        name_of_mayor = "Andreas Bovenschulte";
        Bremen.setName_of_mayor(name_of_mayor);
        name = "Bremen";
        Bremen.setName(name);
        inhabitants = 569352;
        Bremen.setInhabitants(inhabitants);
        area = 326.7;
        Bremen.setArea(area);
        Bremen.print();
    }
    else if (name_of_city == "Paris")
    {
        name_of_mayor = "Anne Hidalgo";
        Paris.setName_of_mayor(name_of_mayor);
        name = "Paris";
        Paris.setName(name);
        inhabitants = 2206488;
        Paris.setInhabitants(inhabitants);
        area = 105.4;
        Paris.setArea(area);
        Paris.print();
    }
    else
    {
        name_of_mayor = "Sadiq Khan";
        London.setName_of_mayor(name_of_mayor);
        name = "London";
        London.setName(name);
        inhabitants = 8173941;
        London.setInhabitants(inhabitants);
        area = 1572;
        London.setArea(area);
        London.print();
    }
    return 0;
}