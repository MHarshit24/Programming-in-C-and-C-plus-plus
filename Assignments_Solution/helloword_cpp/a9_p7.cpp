/*
CH-230-A
a9_p7.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int temporary;
    temporary = a;
    a = b;
    b = temporary;
} // swap ints
void swapping(float &x, float &y)
{
    float temporary;
    temporary = x;
    x = y;
    y = temporary;
} // swap floats
void swapping(const char *&str1, const char *&str2)
{
    const char *temporary = str1;
    str1 = str2;
    str2 = temporary;
} // swap char pointers
int main(void) {
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 = "Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);
swapping(str1, str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}