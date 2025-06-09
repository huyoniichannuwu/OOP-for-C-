#include "date.h"

Date::Date()
{
	month = 1;
	day = 1;
	year = 1990;

}
Date::Date(int m, int d, int y)
{
	//cho ham check
	if (kiemtraDMY(d, m, y))
	{
		this->day = d;
		this->month = m;
		this->year = y;
	}
	else
		cout << "Invalid Date, set to default 1/1/1990. " << endl;
}
Date::~Date()
{
	cout << "Destructor is called"<<endl;
}
void Date::print()
{
	cout << this->month << "/" << this->day << "/" << this->year << endl;
}

bool Date::kiemtraNamnhuan() const

{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
bool Date::kiemtraDMY(int d,int m,int y) const
 {
	if (y < 1) 
	{
		return false;
	}
	if (m < 1 || m>12)
	{
		return false;
	}
	if (d < 1) return false;
	//thang co 31 ngay
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		return (d <= 31);
	}
	//thang co 30 ngay
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return (d <= 30);
	}
	//kiem tra thang 2
	else if (m == 2)
	{
		if (kiemtraNamnhuan())
		{
			return (d <= 29);
		}
		else
			return (d <= 28);
	}
	return false;
}

