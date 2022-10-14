#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>


using namespace std;

/* 
CH-230-A
a9_p9
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function to print a string without vowels
void printV(string S);

//function to check if a char is a vowel
int isVowel(char a);

int main(){

    srand(time(0));

    //answers
    string answers[] = {
        "computer", "television", "keyboard", "laptop",
        "mouse", "cable", "curtesy", "jacket", "power",
        "apricots", "green", "poltergeist", "godzilla",
        "fourteens", "fifteen", "sixteen", "seventeen",
    };
    
    string inp = "";
    int game = 1, win, counter, ans;


    while(game){
        //game setup
        counter = 0;
        win = 0;
        ans = rand() % 17;
        cout << "Here we go! What could the word be?"
             << endl;
        printV(answers[ans]);
        cout << endl;

        while(!win){
            counter++;
            cout << "Guess = ";
            cin >> inp;
            if(inp == answers[ans]){
                win = 1;
                cout << endl << "Ding Ding! You've got it after "
                     << counter << " tries. " << endl
                     << "Play again? (type 'quit' if not)"
                     << endl;
                cin >> inp;
            }
            else {
                cout << endl << "Not quite, Try again" << endl;
                printV(answers[ans]);
                cout << endl;
            }
        }

        if(inp == "quit")
            game = 0;
    }
}

//prints a string without vowels and no endl at end.
void printV(string S){
    for(int i = 0; i < (int)S.length(); i++){
        if(!isVowel(S[i]))
            cout << S[i];
        else
            cout << "_";
    }
}

//checks if a character is a vowel and returns 1 if yes.
int isVowel(char a){
    if(
        a == 'a' ||
        a == 'e' ||
        a == 'i' ||
        a == 'o' ||
        a == 'u' ||
        a == 'A' ||
        a == 'E' ||
        a == 'I' ||
        a == 'O' ||
        a == 'U'
    )
        return 1;
    else 
        return 0;
}