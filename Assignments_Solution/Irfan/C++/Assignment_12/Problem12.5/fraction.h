// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b) const;		// calculates the gcd of a and b
	int lcm(int a, int b) const;

public:
//constructors and destructors
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
//functionality
    void print();				// prints it to the screen
                                // leaving it for legacy code.
    Fraction mult(const Fraction& f) const;
    Fraction div(const Fraction& f) const;
    Fraction add(const Fraction& f) const;
    Fraction sub(const Fraction& f) const;
    bool geq(const Fraction& f) const; //true if greater than or equal to arg
    bool leq(const Fraction& f) const; //true if lesser than or equal to arg
//overloading
    Fraction operator*(const Fraction& f) const {return this->mult(f);}
    Fraction operator/(const Fraction& f) const {return this->div(f);}
    Fraction operator+(const Fraction& f) const {return this->add(f);}
    Fraction operator-(const Fraction& f) const {return this->sub(f);}
    bool operator>(const Fraction& f) const {return this->geq(f);}
    bool operator<(const Fraction& f) const {return this->leq(f);}
    Fraction& operator=(const Fraction& f);

    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend std::istream& operator>>(std::istream&, Fraction&);
};


#endif /* FRACTION_H_ */