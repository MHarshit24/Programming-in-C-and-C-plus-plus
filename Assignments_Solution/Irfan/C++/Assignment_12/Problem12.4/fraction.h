// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

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
//overloading
    Fraction operator*(const Fraction& f) const {return this->mult(f);}
    Fraction operator/(const Fraction& f) const {return this->div(f);}
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend std::istream& operator>>(std::istream&, Fraction&);
};

#endif /* FRACTION_H_ */