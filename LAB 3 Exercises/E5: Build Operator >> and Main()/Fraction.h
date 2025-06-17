#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Fraction
{
private:
	int numerator;	
	int denominator;
	int UCLN(int a,int b);
	void rutGonphanso();
public:
	Fraction(int num, int den);		//parameterized construct
	Fraction(int random);			//expand construct (random)
	//non-member operator overloading
	friend ostream& operator<<(ostream& out, const Fraction& F);
	friend istream& operator>>(istream& in, Fraction& F);

	//operator overloading (++,--) dang tien to'
	Fraction& operator++();
	Fraction& operator--();
	
	//operator overloading (++,--) dang hau to
	Fraction operator++(int a);
	Fraction operator--(int b);

	//operator overloading (+,-,*,/)
	Fraction operator+(const Fraction& other);							//toan cong (member)
	friend Fraction operator-(const Fraction& a,const Fraction& b);		//toan tru(non-member)
	Fraction operator*(const Fraction& other);							// toan nhan (member)
	friend Fraction operator/(const Fraction& a, const Fraction& b);	//toan chia (non-member)

	//operator overloading so sanh (==,!=,<,>)
	friend bool operator==(const Fraction& a, const Fraction& b);
	friend bool operator!=(const Fraction& a, const Fraction& b);
	friend bool operator<(const Fraction& a, const Fraction& b);
	friend bool operator>(const Fraction& a, const Fraction& b);
};

