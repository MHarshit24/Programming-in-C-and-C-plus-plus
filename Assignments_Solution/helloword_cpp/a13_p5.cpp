/*
CH-230-A
a13_p5.cpp
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
    private:
        int x;
    public:
        A(){x = 0;}     //Error resolved 
                        //The default constructor was missing, 
                        // The program showed an error beacuse when the 
                        // class D was called, there was no default 
                        // constructor in D so it jumped to to class 
                        // A where it was ill-formed because the 
                        // function was implicitly deleted, so by 
                        // adding a default constructor to class A, 
                        // the error is resolved.
        A(int i) { x = i; }
        void print() { cout << x; }
};
 
class B: virtual public A
{
    public:
        B():A(10) {  }
};
 
class C:  virtual public A 
{
    public:
        C():A(10) {  }
};
 
class D: public B, public C 
{
};
 
int main()
{
    D d;
    d.print();
    return 0;
}