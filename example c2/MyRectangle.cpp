// implementation - cai dat lop
#include "MyRectangle.h"  //.h= header

float MyRectangle::areaofrectangle()  // tinh dien tich, ko can thuoc tinh vi trong class, class nen them Myrectangle
{
	return length * width;
}

void MyRectangle::input()				//nhap, trong class nen them myrectangle::
{                            
	do
	{
		cout << " Nhap chieu dai va chieu rong: ";
		cin >> length>> width;
	} while (length<= 0 || width <= 0|| width > length);		//dieu kien lap
}

void MyRectangle::output()				//xuat, trong class nen them myrectangle::
{
	//MyRectangle r1;
	//r1.length = 2;   // duoc phep xai vi trong class

	cout << length << " x " << width << " = " << areaofrectangle()<< endl;
}