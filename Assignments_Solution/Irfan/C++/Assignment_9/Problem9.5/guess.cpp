#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* 
CH-230-A
a9_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    //username and input
    string name;
    cout << "Name: ";
    getline(cin, name);
    
    //random gen of answer
    srand(time(0));
    int ans = rand()%100 + 1; //answers from 1-100

    //game variables
    int count = 0, guess = -1;
    while(guess != ans){
        cout << "Guess: ";
        count++;
        cin >> guess;
        if (guess > ans)
            cout << "Too high!\n\n";
        if (guess < ans)
            cout << "Too low!\n\n";
    }

    cout << "Congratulations " << name 
         << "! You only needed " << count << " tries!!";
    return 0;
}
