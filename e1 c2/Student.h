//interface
#include <string>
#include <iostream>
using namespace std;
#pragma once
class Student
{
private:
	string mssv, hoten;   //char hoten[30] hoac char* hoten;
	float dtb;

public:
	void print();
	void input();
};