#ifndef CITY
#define CITY

#include <iostream>

using namespace std;

class City
{
    private:
        string name;
        string mayor;
        int pop;
        double area;
    public:
        City(string n, string m, int pop, double area);
        //getters
        string getName();
        string getMayor();
        int getPop();
        double getArea();
        //setters
        void setName(string n);
        void setMayor(string m);
        void setPop(int p);
        void setArea(double a);
};


#endif