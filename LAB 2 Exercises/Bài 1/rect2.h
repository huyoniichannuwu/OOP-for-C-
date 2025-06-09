#pragma once
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
class Rectangle
{
private:
	int len;
	int wid;
	string fillString;
	static int thisMany;
public:
	Rectangle();
	Rectangle(int l, int w, string fstr);
	~Rectangle();
	//truy xuat 
	int getWid() const;
	int getLen() const;
	//thay doi gia tri 
	void setWidth(int newWid);
	void setLength(int newLen);
	
	//ham
	double perimeter() const;
	double diagonal();
	float area();
	bool isSquare();
	void draw(char c);
	void display() const;
	string fill() const;
	//phuong thuc tinh~
	static int howMany();
};

