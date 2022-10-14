#include <iostream>

using namespace std;

/* 
CH-230-A
a9_p2
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

int main(){
    //integer n
    int n;
    cout << "N = ";
    cin >> n;

    //double x
    double x;
    cout << "x = ";
    cin >> x;

    //string str
    string str;
    cout << "str = ";
    cin >> str;

    //required output
    cout << "\n";
    for(int i = 0; i < n; i++)
        cout << str << ":" << x << endl;

    return 0;
}