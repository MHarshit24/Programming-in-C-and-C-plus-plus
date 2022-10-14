#ifndef VECTOR
#define VECTOR

class Vector {
    private:
        double *vals; //array of doubles.
        int size; //number of elements
    public:
        //constructors and destructors
        Vector(double* const&,const int);
        Vector();
        Vector(const Vector&);
        ~Vector();
        //functionality
        void print();
        double norm();
        Vector add(const Vector) const;
        Vector sub(const Vector) const;
        double dot(const Vector) const; //dot product or scalar product.
        //getters
        double* getV();
        int getSize();
        //setters
        void setV(double*);
        void setSize(int);
        void set(double*, int); //to set both, prevents errors.
};

#endif