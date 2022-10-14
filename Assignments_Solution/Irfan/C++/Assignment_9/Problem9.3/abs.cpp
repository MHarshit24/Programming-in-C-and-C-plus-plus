#include <iostream>

/*
CH-230-A
a9_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function defn
float abs(float x);

int main(){
    //input x
    float x;
    std::cout << "x = ";
    std::cin >> x;

    //outputs
    std::cout << "abs of x = " << abs(x);

    return 0;
}

float abs(float x){
    if(x>=0)
        return x;     //we treat -0 as 0, thank you.
    else 
        return -x;
}