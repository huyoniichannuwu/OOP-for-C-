//interface
#pragma once
#include<iostream>
using namespace std;
class MyRectangle

{
//khai bao attributes/thuoc tinh
private:
	float length, width;
	char* color;
//khai bao method/behavior
public:
	float areaofrectangle();     // tinh dien tich, ko can thuoc tinh vi trong class

	void input();				//nhap

	void output();				//xuat
	MyRectangle();				// default construct
	MyRectangle(float l, float w,char*c);		//parameterized construct
	MyRectangle(const MyRectangle&r);   //tham chieu copy construct
	~MyRectangle();				//destructor
	// truy cap gian tiep attributes
	float getLength();
	float getWidth();
	char* getColor();
	
	//thay doi cac gia tri attributes
	void setLength(float newLength);
	void setWidth(float newWidth);
	void setColor(char* newColor);
};

