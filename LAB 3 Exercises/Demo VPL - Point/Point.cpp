#include "Point.h"
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
istream& operator>>(istream& in, Point& p)				// _thay doi khong duoc them const
{
	cout << "Nhap toa do (x,y): " << endl;
	in >> p.x;
	in >> p.y;
	return in;
}
ostream& operator<<(ostream& out, const Point& p)
{
	out <<"(" << p.x << "," << p.y<<")" << endl;
	return out;
}

double Point::distance() const
{
	return sqrt(x * x + y * y);
}

bool Point::operator<(const Point& p)
{
	return this->distance() < p.distance();       //this-> con tro chi den GIA TRI NGAM DINH.
}