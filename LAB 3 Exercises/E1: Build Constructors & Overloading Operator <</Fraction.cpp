#include "Fraction.h"
int Fraction::UCLN(int a,int b)
{
	int x = abs(a);
	int y = abs(b);
	while (x != y)
	{
		if (x > y) x -= y;
		else y -= x;
	}
	return x;
}


void Fraction::rutGonphanso() 
{
	if (denominator == 0) {
		cout << "Phan so khong hop le, mau so phai khac 0;" << endl;
	}
	int ucln = UCLN(denominator, numerator);
	numerator /= ucln;
	denominator /= ucln;
	//mso luon phai duong
	if (denominator < 0)
	{
		numerator *= -1;
		denominator *= -1;
	}
}

Fraction::Fraction(int num, int den)		//default 0/1
{
	if (den == 0)
	{
		this->numerator = 0;
		this->denominator = 1;
	}
	else
	{
		this->numerator = num;
		this->denominator = den;
		rutGonphanso();
	}
	
}

Fraction::Fraction(int random) 
{
	this->numerator = rand() % (random + 1);
	this->denominator = rand() % random + 1;
	rutGonphanso();
}


ostream& operator<<(ostream& out, const Fraction& F)
{
	out << F.numerator << "/" << F.denominator;
	return out;
}