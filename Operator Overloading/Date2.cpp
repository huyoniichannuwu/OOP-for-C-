#include "Date2.h"
Date2::Date2(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}
int Date2::endDayofmonth()
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (year % 4 == 0 && year % 10 != 0 || year % 400 == 0)
			return 29;
		else
			return 28;
	default:
		return -1;	//thang khong hop le
	}
}
bool Date2::check()
{
	if (year < 1) return false;
	if (month < 1 || month>12)	return false;    // hoặc
	if (day < 1 || day > endDayofmonth()) return false;
	
	return true;
}
bool Date2::operator>(const Date2& d)
{
	// 9,6,2025 > 10,5,2024
	if (this->year > d.year)			//xet nam first
		return true;
	else if (this->year == d.year)		
	{
		if (this->month > d.month)		//xet month
			return true;
		else if (this->month == d.month)
		{
			if (this->day >= d.day)		//xet ngay`
				return true;
		}
	}
	return false;
}
bool operator>(const Date2& d1, const Date2& d2)	
{
	{
		// 9,6,2025 > 10,5,2024
		if (d1.year > d2.year)			//xet nam first
			return true;
		else if (d1.year == d2.year)
		{
			if (d1.month > d2.month)		//xet month
				return true;
			else if (d1.month == d2.month)
			{
				if (d1.day >= d2.day)		//xet ngay`
					return true;
			}
		}
		return false;
	}
}
bool operator==(const Date2& d1, const Date2& d2)
{
	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
		return true;
	}
	return false;			// hoac 1 dong return duy nhat
	//return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}
bool operator<(const Date2& d1, const Date2& d2)
{
	/*if (d1.year < d2.year)
		return true;
	else if (d1.year == d2.year) {
		if (d1.month < d2.month)
			return true;
		else if (d1.month == d2.month)
			if (d1.day < d2.day)
				return true;
	}
	return false;
	*/					// qua dai dong`
	return !(d1 > d2 || d1 == d2);
	
}
ostream& operator<<(ostream& out, const Date2& d)			//Qua tai toan tu << bang ham friend
{
	out << d.getD() << "/" << d.getM() << "/" << d.getY() << '\n';
	return out;	
}
istream& operator>>(istream& in, Date2& d)
{
	cout << "Enter date:";
	in >> d.day >> d.month >> d.year;
	return in;
}

Date2& Date2::operator++()			//dang tien to
{
	if (day == endDayofmonth())
	{
		day = 1;
		if (month == 12) {		//cuoi nam
			month = 1; year++;
		}
		else			//cuoi thang
			month++;
	}
	else day++;
	
	return *this;

}
const Date2 Date2::operator++(int a)	//dang hau to(luu y)
{
	Date2 backup(*this);
	++(*this);					//goi toan tu ++ bang tien to



	return backup;
}