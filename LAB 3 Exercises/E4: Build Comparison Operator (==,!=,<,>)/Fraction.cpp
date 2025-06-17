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
		cout << "Phan so khong hop le, mau so phai khac 0" << endl;
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

Fraction& Fraction::operator++()
{
	numerator += denominator;				// 1/2 + 1 = 3/2   (1+2/2)
	return *this;
}

Fraction Fraction::operator++(int a)
{
	Fraction backup(*this);
	++(*this);								//goi toan tu ++ bang hau to
	return backup;
}

Fraction& Fraction::operator--()
{
	numerator -= denominator;				// 1/2 - 1 = -1/2 (1-2/2)
	return *this;
}


Fraction Fraction::operator--(int b)
{
	Fraction backup(*this);
	--(*this);
	return backup;
}

Fraction Fraction::operator+(const Fraction& other)
{
	int BCNN = other.denominator;
	while (BCNN % denominator != 0) 
	{
		BCNN += other.denominator;
	}
	//return a new fraction
	return Fraction							//	num/den
	(
		(BCNN / this->denominator) * this->numerator + (BCNN / other.denominator) * other.numerator, BCNN
	);
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
	int BCNN = b.denominator; 
	while (BCNN % a.denominator != 0)		//	1/2 và 2/3 => đặt int là số 3,			3 % 2 != 0 => 3+3=6   6 la bcnn do chia het cho hai
	{
		BCNN += b.denominator;	
	}
	//return a new fraction
	return Fraction							//num/den
	(
		(BCNN / a.denominator) * a.numerator - (BCNN / b.denominator) * b.numerator, BCNN
	);
}

Fraction Fraction::operator*(const Fraction& other)			//	1/2 * 2/3 = 2/6 -> 1/3?
{
	return Fraction(numerator*other.numerator, denominator*other.denominator);
}

Fraction operator/(const Fraction& a, const Fraction& b)	//toan chia (non-member) - chia = nhan nghich dao
{
	return Fraction(a.numerator * b.denominator, b.numerator * a.denominator);      
}

bool operator==(const Fraction& a, const Fraction& b)
{
	return (a.numerator == b.numerator && a.denominator == b.denominator);
}

bool operator!=(const Fraction& a, const Fraction& b)
{
	return !(a == b);	
}

bool operator>(const Fraction& a, const Fraction& b)		// > same meaning with not < or =
{
	/*if (a.denominator > b.denominator)
		return true;
	else if (a.denominator == b.denominator)
	{
		if (a.numerator > b.numerator)
			return true;
	}
	return false;*/			// khong the dung truoc hop nay cho 5/2 so sanh 1/4   2<4 return false -> sai logic
	
	return (a.numerator * b.denominator > b.numerator * a.denominator);				//chinh xac nhat
}

bool operator<(const Fraction& a, const Fraction& b)
{
	return !(a == b || a > b);
	//  if !(a==b||a<b) return true;
	//	return false
}
