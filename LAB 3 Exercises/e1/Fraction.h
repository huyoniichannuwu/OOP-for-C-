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
};

