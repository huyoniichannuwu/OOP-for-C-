#include "date.h"

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1990;

}
Date::Date(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}
Date::~Date()
{
	cout << "Destructor is called"<<endl;
}
void Date::print()
{
	cout << "Date: " << day << "/" << month << "/" << year << endl;
}

bool Date::kiemtraNamnhuan() 

{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	else
		return false;
}
bool Date::kiemtraDMY()
{
	if (year < 1990)
		return false;
	if (month < 1 && month>12)
		return false;
	if (day < 1) return false;
	//thang co 31 ngay
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return (day <= 31);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return (day <= 30);
	}
	//kiem tra thang 2
	if (month == 2)
	{
		if (kiemtraNamnhuan())
		{
			return (day <= 29);
		}
		else
			return (day <= 28);
	}
}


