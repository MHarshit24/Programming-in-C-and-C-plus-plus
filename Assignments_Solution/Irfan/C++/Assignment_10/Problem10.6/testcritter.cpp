#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;

/* 
CH-230-A
a10_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(int argc, char** argv){
	Critter c;

	string tempStr;
	int tempInt;
	cout << endl << "Please enter data: " << endl;
	
    cout << "Name: ";
	getline(cin, tempStr);
	c.setName(tempStr);

    cout << "Adjective: ";
    getline(cin, tempStr);
    c.setAdj(tempStr);

    cout << "Torpor: ";
    cin >> tempInt;
    c.setTorpor(tempInt);
    
	cout << "Hunger: ";
	cin >> tempInt;
	c.setHunger(tempInt);

    cout << "Boredom: ";
    cin >> tempInt;
    c.setBoredom(tempInt);

    Critter d("Whi", 5, 10, 7.4, 5.6); //May add only this. 

	cout << "You have created:" << endl;
	c.print();
    
    return 0;
}