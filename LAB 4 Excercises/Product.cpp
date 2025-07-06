#include "Product.h"

Product::Product(string code, float price)
{
	this->code = code;
	this->price = price;
}
string Product::getCode() const
{
	return this->code;
}
float Product::getPrice() const
{
	return this->price;
}
void Product::setCode(string newCode)
{
	this->code = newCode;
}
void Product::setPrice(float newPrice)
{
	if (newPrice >= 0)
	{
		this->price = newPrice;
	}
	else
		cout << "Gia khong hop le" << endl;
}

double Product::total(int soLuonghang)						//tong so tien so luong 		
{
	if (soLuonghang >= 20 && soLuonghang <= 50)
	{
		return 0.95 * (this->price*soLuonghang);						//mua 20-50 giam 5%,
	}
	else if (soLuonghang > 50)
	{
		return 0.92 * (this->price*soLuonghang);					//>50 giảm 8%
	}
}

void Product::show() const
{
	cout << "Code: " << this->code << endl;
	cout << "Price: " << this->price <<endl ;
}

istream& operator>>(istream& in, Product& p)
{
	cout << "Input Product Code: ";
	in >> p.code;
	cout << endl;
	cout << "Input Product Price(VNĐ): ";
	in	>> p.price;
	cout << endl;
	return in;
}
