#include <iostream>
#include "Box.h"

using namespace std;

/* 
CH-230-A
a11_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    //variable setup
    int n;
    double temp;
    cout << "N = ";
    cin >> n;
    
    //dynamic allocation
    Box *boxes;
    boxes = new Box[2*n];

    //box inputs
    for(int i = 0; i < n; i++){
        cout << endl << "height of box " << i << ": ";
        cin >> temp;
        boxes[i].setHeight(temp);

        cout << "width of box " << i << ": ";
        cin >> temp;
        boxes[i].setWidth(temp);

        cout << "depth of box" << i << ": ";
        cin >> temp;
        boxes[i].setDepth(temp);

        boxes[n+i] = Box(boxes[i]); 
    }

    cout << endl << endl;

    //output loop
    for(int i = 0; i < 2*n; i++){
        cout << "Volume of box " << i << ": "
             << boxes[i].volume() << endl;
    }

    //de-allocation
    delete[] boxes;

    return 0;
}