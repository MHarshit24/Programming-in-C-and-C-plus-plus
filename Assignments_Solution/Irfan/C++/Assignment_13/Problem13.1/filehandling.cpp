#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* 
CH-230-A
a13_p1
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main()
{
    ifstream f;
    ofstream o;
    string inpFile;
    string outFile;
    string temp;

    //open input file and error handling
    cin >> inpFile;
    f.open(inpFile);
    if(!f)
        exit(0);

    //remove last 4 characters and append _copy.txt
    outFile = inpFile.substr(0, inpFile.length() - 4) + "_copy.txt";
    o.open(outFile);
    if(!o)
        exit(0);

    //copy logic
    while(!f.eof()){
        getline(f, temp);
        o << temp << endl;
    }

    f.close();
    o.close();

    return 0;
}