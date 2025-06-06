#include "MyRectangle.h"

int main()
{
	//tao doi tuong r1 = default contruct
	cout << "So doi tuong hien hanh: " << MyRectangle::getCount() << endl; //0

	MyRectangle r1;			// tao doi tuong r1
	cout << "So doi tuong hien hanh: " << MyRectangle::getCount() << endl; //1 - bang toan tu 
	cout << "So doi tuong hien hanh: " << r1.getCount() << endl; //1 -bang doi tuong
	//r1.input();             // message
	r1.output();
	cout << r1.getA() << endl;
	cout << "Chieu dai r1 = " << r1.getLength() << endl;
	r1.scaleup(2).setLength(5);	//method chaining

	//r1.setLength(-3);
	cout << "Chieu dai r1 = " << r1.getLength() << endl;
	// cout << "Dien tich r1: " << r1.areaofrectangle() << endl;
	//r1.length=2;   // error main nam ngoai lop, ko duoc su dung len
}
	
	//tao doi tuong r2 = ham tao co tham so
	
	/*MyRectangle r2(3, 2, (char*)"red");
	cout<<r2.getA()<<endl;
	
	/*int* p = new int[5];
	MyRectangle* r2= new MyRectangle();  // tao doi tuong r2 bang con tro
	r2->input();
	r2->output();
	cout << "Dien tich r2: " << r2->areaofrectangle() << endl;
	return 0;  //lat tra 
	
	
	//tao doi tuong r3 = default contruct
	MyRectangle* r3 = new MyRectangle();
	r3->output();
	//tao doi tuong r4 = ham tao co tham so
	MyRectangle* r4 = new MyRectangle(2, 3,(char*)"blue");
	r4->output();
	//tao doi tuong r4 = ham tao copy
	MyRectangle r5(r2);
	cout << "So doi tuong hien hanh: " << r1.getCount() << endl;	//5
	cout << "So doi tuong hien hanh: " << r5.getCount()<<endl;	//5
	r5.output();
	cout << r5.getA() << endl;

	//tao const object
	const MyRectangle r6;
	cout << "Chieu dai r6: " << r6.getLength();
	//r6.setLength(2); sai
	//xoa thanh minh
	delete r3; // ham huy
	delete r4;

	return 1;*/



	



