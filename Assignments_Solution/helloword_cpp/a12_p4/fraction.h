/*
CH-230-A
a12_p4.h
Harshit Mutha
h.mutha@jacobs-university.de
*/
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
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend std::ostream& operator<<(std::ostream& out, const Fraction& f);				// prints it to the screen
	friend std::istream& operator>>(std::istream& in, Fraction& f);
	friend Fraction operator*(const Fraction&, const Fraction&);
	friend Fraction operator/(const Fraction&, const Fraction&);
};


#endif /* FRACTION_H_ */