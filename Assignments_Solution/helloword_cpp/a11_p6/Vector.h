/*
CH-230-A
a11_p6.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
class Vector{
    private:
        int size;
        double *vector;
    public:
        Vector();    //default constructor
        Vector(int newsize, double *&newvector);   //parametric constructor
        Vector(Vector &vec);   //copy constructor
	    ~Vector();   //destructor
        //setter method
        void setSize(int newsize);
        void setVector(double *&newvector);
        //service method
        void print();
        //getter method
        int getSize();
        double *getVector();
        double norm();
        Vector sum(const Vector &vec) const;
        Vector diff(const Vector &vec) const;
        double scalar_product(Vector& vec);
};