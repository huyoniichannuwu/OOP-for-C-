#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
private:
	double x;
	double y;
	double distance() const;
public:
	Point(double x = 0, double y = 0);
	
	//NON-MEMBER OPERATOR OVERLOADING    
	friend istream& operator>>(istream& in,Point& p);				// _thay doi khong duoc them const
	friend ostream& operator<<(ostream& out, const Point& p);

	//MEMBER OPERATOR OVERLOADING
	bool operator<(const Point& p);
};

