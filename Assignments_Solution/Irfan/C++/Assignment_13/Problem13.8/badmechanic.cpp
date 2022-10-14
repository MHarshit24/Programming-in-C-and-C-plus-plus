#include <iostream>

using namespace std;

/* 
CH-230-A
a13_p8
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//only exists to throw errors.....
class Motor {
public:
    Motor() { throw (string)"This motor has problems"; }
};

//A Car class with a Motor.
class Car {
private:
    Motor m;
};

//A garage class containing a Car pointer
//with exception handling initialization
class Garage {
private:
    Car *c;
public:
    Garage() {
        try {
            c = new Car();
        } catch (string s) {
            //80 character limit.
            throw 
                (string)"The car in this garage has problems with the motor";
        }
    }
};

//main
int main(){
    try{
        new Garage(); //simply create a new Garage.
    } catch (string s){
        cerr << s << endl;
    }
    return 0;
}