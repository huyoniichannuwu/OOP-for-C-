//implementation
#include "rect.h"

Rectangle::Rectangle()
{
	len = 10;
	wid = 10;
}

Rectangle::Rectangle(int l, int w)
{
	if (l > 0 && l <= 20 && w > 0 && w <= 20)
	{
		len = l;
		wid = w;
	}
	if (len < wid)
	{
		int doigiatri = len;
		len = wid;
		wid = doigiatri;
	}
}

int Rectangle::getWid()
{ 
	return wid;
}
int Rectangle::getLen()
{
	return len;
}

void Rectangle::setLength(int newLen)
{

	if (newLen > 0 && newLen >= wid)
		len = newLen;
	else
	{
		cout << "Incorrect Length data." << endl;
		return;
	}
	0;
	
}
void Rectangle::setWidth(int newWid)
{

	if (newWid > 0 && len >= newWid)
		wid = newWid;
	else {
		cout << "Incorrect Width data." << endl;
		return;
	}
	0;
}
void Rectangle::display()
{
	if (len > 0 && wid > 0) {
		cout << "[" << len << "x" << wid << "]" << endl;
		for (int i = 0; i < wid; i++) {
			for (int j = 0; j < len; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	else
		cout <<endl<<  "Invalid Length and Width input.Try again!";
};
void Rectangle::draw(char c) 
{
	if (len > 0 && wid > 0) {
		for (int i = 0; i < wid; i++) {
			for (int j = 0; j < len; j++) {
				cout << c;
			}
			cout << endl;
		}
	}
}
	
float Rectangle::perimeter()
{
	return 2 * (len + wid);
}
double Rectangle::diagonal()		//required double. diagonal = sqrt( a**2+b**2)
{
	return sqrt(pow(len,2) + pow(wid,2));		//pow= ^
}
float Rectangle::area()
{
	return len * wid;
}
bool Rectangle::isSquare()		//xac dinh la hinh vuong. return dai = rong
{
		return len == wid;
}