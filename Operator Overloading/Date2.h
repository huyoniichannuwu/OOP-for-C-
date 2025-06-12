#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Date2
{
	
	private:
		int day;
		int month;
		int year;
		int endDayofmonth();
	public:
		Date2(int d=1, int m=1, int y=1990);
		//~Date2();
		int getM() const { return month; }
		int getD() const { return day; }
		int getY() const { return year; }
		//void print();
		//bool kiemtraNamnhuan() const;
		//bool kiemtraDMY(int d, int m, int y) const;
		bool check();

		//qua tai toan tu  So sánh: >, <, ==   là hàm thành viên của lớp: 1 thành viên
		//Xuất nhập : << , >>
		//Tăng ngày : ++ (trả về ngày tiếp theo)
		bool operator>(const Date2& d);
		// qua tai toan tu  So sánh: > là non-member : 2 tham số
		friend bool operator>(const Date2& d1, const Date2& d2);
		
		friend bool operator==(const Date2& d1, const Date2& d2);
		friend bool operator<(const Date2& d1, const Date2& d2);
		//cai dat toan tu << la ham ban
		friend ostream& operator<<(ostream& out, const Date2& d);
		friend istream& operator>>(istream& in, Date2& d);

		Date2& operator++();		//ham thanh vien, ngoi thu 1 => 0 tham so   	//dang tien to
		const Date2 operator++(int a);	//qua tai toan tu => khac tham so ben trong				//dang hau to	
};



