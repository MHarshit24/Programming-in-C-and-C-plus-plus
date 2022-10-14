#include <iostream>
#include <vector>

using namespace std;

/* 
CH-230-A
a13_p6
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    vector<int> V; //vector of ints.

    for(int i  = 0; i < 20; i++) //assign 8 20 times.
        V.push_back(8);

    //try block
    try{
        V.at(21);
    } catch (const out_of_range& o){
        //outputting to cerr stream o.what()
        cerr << "Exception Error: " << o.what();
    }

    return 0;
}