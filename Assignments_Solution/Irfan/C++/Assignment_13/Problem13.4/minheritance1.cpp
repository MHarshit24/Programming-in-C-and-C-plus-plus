#include <iostream>

using namespace std;

/* 
CH-230-A
a13_p4
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

/*
    The following program used to not compile as the print() call
    was ambiguous.
*/


class A{
    int x;
public:
    void setX(int i) {x = i;}
    void print() { cout << x; }
};

//inherit as virtual so only one subobject created
class B:  public virtual A
{
public:
    B()  { setX(10); }
};

//inherit as virtual so only one subobject created
class C:  public virtual A  
{
public:
    C()  { setX(20); }
};
 
class D: public B, public C {
public:
    D() { setX(30); } 
    //utilize default constructor for A
    //it is generated automatically.
    //and later setX as 30 arbitrarily
};
 
int main()
{
    D d;
    d.print();
    return 0;
}