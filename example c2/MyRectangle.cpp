// implementation - cai dat lop
#include "MyRectangle.h"  //.h= header
#include <cstring>		// de su dung strcpy_s
MyRectangle::MyRectangle() 
{
	length = 1;
	width = 1;
	color = new char[10];
	strcpy_s(color, 10, "white");
}
MyRectangle::MyRectangle(float l, float w, char* c) {
	length = l;
	width = w;
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}
MyRectangle::MyRectangle(const MyRectangle& r) {
	length = r.length;
	width = r.width;
	color = new char[strlen(r.color) + 1];
	strcpy_s(color, strlen(r.color) + 1, r.color);
}
MyRectangle::~MyRectangle() {
	cout << "Destructor confirmed" << endl;
	if (color != nullptr) {
		delete[] color;
	}
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

float MyRectangle::getLength() {
	return length;
}
float MyRectangle::getWidth() {
	return width;
}
char* MyRectangle::getColor() {
	return color;
}

void MyRectangle::setLength(float newLength)
{
	if (newLength > 0 && newLength > width)
		length = newLength;
	else
		cout << "Invalid length" << endl;
}

void MyRectangle::setWidth(float newWidth)
{
	if (newWidth > 0 && newWidth < length)
		width = newWidth;
	else
		cout << "Invalid Width" << endl;
}
void MyRectangle::setColor(char* newColor) 
{
	if (newColor != nullptr && strlen(newColor) > 0) {
		// Giải phóng bộ nhớ cũ (nếu có)
		if (color != nullptr) {
			delete[] color;
		}
		// Cấp phát bộ nhớ mới và sao chép nội dung
		color = new char[strlen(newColor) + 1];
		strcpy_s(color, strlen(newColor) + 1, newColor);
	}
	else 
		cout << "Invalid Color" << endl;

}