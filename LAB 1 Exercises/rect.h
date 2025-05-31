#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
private:
	int len;
	int wid;
public:
	Rectangle();
	Rectangle(int l, int w);
	//truy xuat 
	int getWid();
	int getLen();
	//thay doi gia tri 
	void setWidth(int newWid);
	void setLength(int newLen);
	
	//ham
	float perimeter();
	double diagonal();
	float area();
	bool isSquare();
	void draw(char c);
	void display();
};

