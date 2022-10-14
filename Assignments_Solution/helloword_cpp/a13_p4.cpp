/*
CH-230-A
a13_p4.cpp
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
        void setX(int i) {x = i;}
        void print() { cout << x; }
};
 
class B:  virtual public A      //virtual makes the two classes share
                                //a single copy of their base class
{
    public:
        B()  { setX(10); }
};
 
class C:  virtual public A      //virtual makes the two classes share
                                //a single copy of their base class
{
    public:
        C()  { setX(20); }
};
 
class D: public B, public C 
{
};
 
int main()
{
    D d;
    // The ambiguity was appearing initially, because the 
    // compiler was getting confused that which class should 
    // it use because class B and class C were both being 
    // inherited from class A so it was becoming ambigous 
    // that whether it should use the value from class B 
    // or class C. Basically, two copies of the base class 
    // were being formed which has now been resolved using virtual
    d.print();      //Ambiguity is resolved 
                    //It will print 20 because the class C has overwritten class B
    return 0;
}