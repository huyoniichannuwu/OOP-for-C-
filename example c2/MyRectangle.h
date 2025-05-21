//interface
#pragma once
#include<iostream>
using namespace std;
class MyRectangle

{
//khai bao attributes
private:
	float length, width;
//khai bao method/behavior
public:
	float areaofrectangle();     // tinh dien tich, ko can thuoc tinh vi trong class

	void input();				//nhap

	void output();				//xuat
};

