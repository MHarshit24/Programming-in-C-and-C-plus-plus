#include <iostream>

using namespace std;

/* 
CH-230-A
a13_p7
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//inheriting from exception class
class OwnException : public exception {
private:
    string s;
public:
    //constructors
    OwnException() : s("Default OwnException") { }
    OwnException(const string &ns) : s(ns) { }
    //overriding
    const char* what() const noexcept {
        return "OwnException.\n";
    }
};

//function that throws errors
void err(int x){
    if(x == 1)
        throw 'a';
    else if(x == 2)
        throw 12;
    else if(x == 3)
        throw true;
    else{
        OwnException o("Default Case Exception");
        throw o;
        //the error contains the string mentioned in question
        //but .what() will print what is specified in question. 
    }
}

int main(){
    //a for loop to call the different errors
    for(int i = 1; i <= 4; i++){
        try{
            err(i); //error throwing function called
        } catch(char x) { //catch with type info.
            cerr << "Caught in main: " << x << endl;
        } catch(int x) {
            cerr << "Caught in main: " << x << endl;
        } catch(bool x) {
            cerr << "Caught in main: " << x << endl;
        } catch(const OwnException &x) {
            cerr << "Caught in main: " << x.what();
        } catch(...) {
            cerr << "Mysterious error caught. How did we get here?";
        }
    }

    return 0;
}
