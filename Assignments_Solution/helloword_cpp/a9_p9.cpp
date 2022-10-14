/*
CH-230-A
a9_p9.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//Function for the game
void word_game(string name)
{
    string arr[17] = {"computer", "television", "keyboard", "laptop", "mouse",
                      "camera", "monitor", "microphone", "speaker", "printer",
                      "scanner", "headphone", "keypad", "touchpad", "remote",
                      "controller", "joystick"};
    //Selecting a random number between 0 to 16
    srand (static_cast < unsigned int > (time (0)));
    int random = rand();
    int rand_n = (random % 17);
    string word = arr[rand_n];
    cout<<endl<<"Here is your word: ";
    int size_of_the_word = word.size();
    for (int i = 0; i < size_of_the_word; i++)
    {
        //Replacing the vowels with underscore
        if (word[i] == 'a' || word[i] == 'e' 
        || word[i] == 'i' || word[i] == 'o' 
        || word[i] == 'u')
        {
            word[i] = '_';
        }
        cout<<word[i];
    }
    cout<<endl<<"Guess the complete word: ";
    string guessed_word;
    getline(cin, guessed_word);
    int attempts = 1;
    while (arr[rand_n] != guessed_word)
    {
        cout<<endl<<"Try again: ";
        getline(cin, guessed_word);
        attempts = attempts + 1;
    }
    cout<<endl<<"Congratulation "<<name<<" you guessed the word in "<<attempts;
    //An if statement to make it grammatically correct for the user
    if (attempts == 1)
    {
        cout<<" attempt!"<<endl;
    }
    else
    {
        cout<<" attempts!"<<endl;
    }
    cout<<"Hope you enjoyed the game."<<endl<<endl;
    cout<<"Do you want to play again?"<<endl;
    //Asking the user if he wants to play again
    cout<<"If yes, then enter yes, if no, then enter quit."<<endl;
}
int main() 
{
    cout<<"Welcome to my COMPLETING THE WORD game"<<endl<<endl;
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    //Calling the function
    word_game(name);
    string answer;
    getline(cin, answer);
    while (answer != "quit")
    {
        if (answer == "yes")
        {
            word_game(name);
            getline(cin, answer);
        }
        else
        {
            cout<<"You entered an invalid answer to the question, so you have to play again!!"<<endl;
            word_game(name);
            getline(cin, answer);
        }
    }
    return 0;
}