#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	~Date();
	void print();
	bool kiemtraNamnhuan();
	bool kiemtraDMY();
};

