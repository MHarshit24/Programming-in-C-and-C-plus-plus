#include <iostream>

using namespace std;

/*
CH-230-A
a13_p5
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

class A {
    int x;
public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A {
public:
    B() : A(10) {}
};

class C : virtual public A {
public:
    C() : A(10) {}
};

/*
    The virtual class A must be constructed in most derived class
    This is done with a value of 10 arbitrarily.

    previously default constructor for D was deleted
    since a default constructor was not available for class A
    and this meant the default constructor was ill-defined.
*/
class D : public B, public C {
public:
    D() : A(10), B(), C() {}
};

int main()
{
    //D d; did not run as no default constructor available previously.
    D d; 
    d.print();
    return 0;
}