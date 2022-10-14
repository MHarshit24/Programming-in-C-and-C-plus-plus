/*
CH-230-A
a13_p1.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line, filename;
    cout << "Enter the filename: ";
    getline(cin, filename);
    //For writing text file
    //Creating ofstream & ifstream class object
    ifstream inputfile;
    inputfile.open(filename);
    if (!filename.empty()) 
    {
        filename.erase(filename.size() - 4);
    }
    filename += "_copy.txt";
    ofstream copyfile;
    copyfile.open(filename);
    if(inputfile && copyfile)
    {
        while(getline(inputfile, line))
        {
            copyfile << line << endl;
        }
        cout << "Copy Finished" << endl;
    } 
    else 
    {
        cout << "Cannot read File" << endl;
    }
    //Closing file
    inputfile.close();
    copyfile.close();
    return 0;
}