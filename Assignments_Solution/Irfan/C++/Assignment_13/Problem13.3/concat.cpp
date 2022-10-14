#include <iostream>
#include <fstream>
using namespace std;

/* 
CH-230-A
a13_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//sets buffer size
#define BUF_SIZE 64


int main(){
    //file count
    int n;
    cout << "Number of files to concatenate: ";
    cin >> n;

    //setting up buffer, temp input stream, output stream.
    char stemp[BUF_SIZE];
    ifstream temp;
    ofstream out("concatn.txt", ofstream::binary);
    if (!out){
        cout << "output file error!";
        exit(0);
    }

    //main logic
    for(int i = 0; i < n; i++){
        //input file setup
        cout << "Name of file " << i << ": ";
        cin >> stemp;
        temp.open(stemp, ifstream::binary);
        if(!temp){
            cout << "file " << i << " has failed!";
            exit(0);
        }
        
        //concat logic
        while(temp){
            temp.read(stemp, BUF_SIZE);
            out.write(stemp, temp.gcount());
        }

        //clearing up for next loop
        out.put('\n');
        temp.close();
        temp.clear();
    }

    return 0;
}