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
	static int count;	// static attribute: quan ly so luong hien hanh
	const int a;		//const attribute
//khai bao method/behavior
public:
	float areaofrectangle();     // tinh dien tich, ko can thuoc tinh vi trong class

	void input();				//nhap

	void output();				//xuat
	
	//get:truy cap gian tiep attributes
	float getLength() const;
	float getWidth() const;
	char* getColor() const;
	static int getCount();		//phuong thuc tinh~
	int getA() const;			//phuong thuc hang
	//set:cho phep thay doi gia tri attributes
	void setLength(float newlength);
	void setWidth(float newwidth);
	//void setColor(char* newcolor);                                            //ve lam
	~MyRectangle();				// ham huy
	MyRectangle();				//default contruct - ham khoi tao mac dinh
	MyRectangle(float length, float width, char*color);
	MyRectangle(const MyRectangle& r); //ham tao sao chep - copy contruct

	MyRectangle scaleup(int i); //ham tra ve doi tuong
	MyRectangle scaleup2(int i);
	MyRectangle& scaleup3(int i); //ham tra ve tham chieu
};

