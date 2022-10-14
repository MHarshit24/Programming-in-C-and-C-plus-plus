#include <iostream>

using namespace std;

/*
CH-230-A
a9_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/


//overloaded function declarations.
int mycount(int a, int b);
int mycount(char a, string str);

int main(){
    //when passing two integers
    int x,y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "mycount(x,y) = " << mycount(x,y) << endl;
    
    //when passing a character and two strings
    char a;
    string myStr;
    cout << "a = ";
    cin >> a;
    cout << "myStr = ";
    cin.ignore(); //to clear '\n'
    getline(cin, myStr);

    cout << "mycount(a,myStr) = " << mycount(a,myStr);

    return 0;

}

//function defn ahead
int mycount(int a, int b){
    return b-a;
}


//uses str.length() in the for loop to pass through loop.
//CaSe SeNsiTive
int mycount(char a, string str){
    int count = 0;
    for(int i = 0; i < (int)str.length(); i++){
        if(str[i] == a)
            count++;
    }        
    return count;
}