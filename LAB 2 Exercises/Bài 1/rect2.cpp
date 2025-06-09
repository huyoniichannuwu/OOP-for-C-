//implementation
#include "rect2.h"

int Rectangle::thisMany = 0;

Rectangle::Rectangle()
{
	this->len = 10;
	this->wid = 10;
	this->fillString = "";
	thisMany++;
}

Rectangle::Rectangle(int l, int w, string fstr)
{
	if (l > 0 && l <= 20 && w > 0 && w <= 20)
	{
		this->len = l;
		this->wid = w;
	}
	if (this->len < this->wid)
	{
		int doigiatri = len;
		len = wid;
		wid = doigiatri;
	}
	thisMany++;
	
	this->fillString = fstr;
}

Rectangle::~Rectangle()
{
	cout << endl << "Destructor is called" << endl;
	thisMany--;
}

int Rectangle::getWid() const
{ 
	return this->wid;
}
int Rectangle::getLen() const
{
	return this->len;
}

void Rectangle::setLength(int newLen)
{

	if (newLen > 0 && newLen >= wid)
		this->len = newLen;
	else
	{
		cout << "Incorrect Length data." << endl;
	}
	
}
void Rectangle::setWidth(int newWid)
{

	if (newWid > 0 && len >= newWid)
		this->wid = newWid;
	else {
		cout << "Incorrect Width data." << endl;
	}
}
void Rectangle::display() const
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
		cout << endl<< "Invalid Length and Width input.Try again!";
}

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
	
double Rectangle::perimeter() const
{
	if (len > 0 && wid > 0)
		return 2 * (len + wid);
	else
		return 0;
}
double Rectangle::diagonal()		//required double. diagonal = sqrt( a**2+b**2)
{
	return sqrt(pow(len,2) + pow(wid,2));		//pow= ^
}
float Rectangle::area()
{
	return len * wid;
}
bool Rectangle::isSquare()		//xac dinh la hinh vuong. dieu kien: dai = rong
{
		return len == wid;
}

int Rectangle::howMany()
{
	return thisMany;
}

string Rectangle::fill() const
{
	return this->fillString;
}