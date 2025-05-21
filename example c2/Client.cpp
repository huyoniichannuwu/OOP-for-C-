#include "MyRectangle.h"

int main()
{
	MyRectangle r1;			// tao doi tuong r1
	r1.input();             // message
	r1.output();
	cout << "Dien tich r1: " << r1.areaofrectangle() << endl;
	//r1.length=2;   // error main nam ngoai lop, ko duoc su dung len
	
	int* p = new int[5];
	MyRectangle* r2= new MyRectangle();  // tao doi tuong r2 bang con tro
	r2->input();
	r2->output();
	cout << "Dien tich r2: " << r2->areaofrectangle() << endl;
	return 0;
}