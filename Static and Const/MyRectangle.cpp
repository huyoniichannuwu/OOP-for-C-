// implementation - cai dat lop
#include "MyRectangle.h"  //.h= header
#include <cstring>		// de su dung strcpy_s
int MyRectangle::count = 0;    // khoi tao gia tri cho static attribute
MyRectangle::MyRectangle() :a(1)   // khoi tao default contruct
{
	length = 1;
	width = 1;
	//
	color = new char[10];
	strcpy_s(color,10, "white");
	count++;
}
MyRectangle::MyRectangle(float length, float width,char* color): a(2) //ham tao co tham so
{
	this->length = length;          //ten giong nhau dung this->length( thuoc tinh)  = length(tham so)
	this->width = width;
	//
	color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	count++;
}
MyRectangle::MyRectangle(const MyRectangle& r): a(3)  // copy contruct
{
	length = r.length;
	width = r.width;
	//
	color = new char[strlen(r.color) + 1];
	strcpy_s(color, strlen(r.color) + 1, r.color);
	count++;
}
MyRectangle::~MyRectangle()
{
	cout << "Detructor is called" << endl;
	if (color != NULL) {
		delete[] color;
	}
	count--;
}

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

	cout << length << " x " << width << endl;
	cout << color << endl;
}
float MyRectangle::getLength() const
{
	return this->length;
}
float MyRectangle::getWidth() const
{
	return width;
}
char* MyRectangle::getColor() const
{
	return color;
}
int MyRectangle::getCount() 
{		
	return count;
}
int MyRectangle::getA() const
{
	return a;
}
void MyRectangle::setLength(float newLength) 
{
	if (newLength > 0 && newLength > width) {
		length = newLength;
	}
	else
		cout << "invalid length"<<endl;
}
void MyRectangle::setWidth(float newWidth) 
{
	if (newWidth > 0 && newWidth < length) {
		width = newWidth;
	}
	else
		cout << "invalid width"<<endl;
}
MyRectangle MyRectangle::scaleup(int i) //ham tra ve doi tuong
{
	//thay doi hcn ban dau
	length = length * i;
	width = width * i;
	return *this;
}
MyRectangle MyRectangle::scaleup2(int i)
{
	//hcn moi voi i wid, i len
	/*MyRectangle newR;
	newR.length = length * i;
	newR.width = width * i;
	return newR;*/  //cach 1

	//lab3 ap dung nhieu
	return MyRectangle(length * i, width * i, color);

}
MyRectangle& MyRectangle::scaleup3(int i) //ham tra ve tham chieu
{
	//thay doi hcn ban dau
	length = length * i;
	width = width * i;
	return *this;
}
