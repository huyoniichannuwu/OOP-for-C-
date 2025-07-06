#pragma once
#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
	string code;
	float price;
public:
	//constructor
	Product(string code = "111", float price = 0);
	
	string getCode() const;
	float getPrice() const;
	void setCode(string newCode);
	void setPrice(float newPrice);
	
	//tinh tong so tien. so luong mua 20-50 giam 5%, >50 giảm 8%
	double total(int soLuonghang);
	
	//output
	void show() const;

	//toan tu nhap
	friend istream& operator>>(istream& in, Product& p);
	
};

