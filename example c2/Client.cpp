#include "MyRectangle.h"

int main()
{
	//tao doi tuong r1 = default contruct
	MyRectangle r1;			// tao doi tuong r1
	r1.output();
	//r1.input();             // message
	cout << "Chieu dai r: " << r1.getLength() << endl;
	r1.output();
	
	
	//r1.length=2;   // error main nam ngoai lop, ko duoc su dung len
	MyRectangle r2;
	r2.setLength(-3);
	//MyRectangle r2(3, 2,(char*)"Red");
	r2.output();

	MyRectangle* r3 = new MyRectangle();
	r3->output();

	MyRectangle* r4 = new MyRectangle(3, 2,(char*) "Blue");
	r4->output();
	MyRectangle r5(r2);
	r5.output();
	//ham huy
	delete r3;
	delete r4;


	//return 1;
	/*tao doi tuong r2 = ham tao co tham so
	MyRectangle r2(3, 2,(char*)"red");
	
	
	/*int* p = new int[5];
	MyRectangle* r2= new MyRectangle();  // tao doi tuong r2 bang con tro
	r2->input();
	r2->output();
	cout << "Dien tich r2: " << r2->areaofrectangle() << endl;
	return 0;
	
	
	//tao doi tuong r3 = default contruct
	MyRectangle* r3 = new MyRectangle();
	r3->output();
	//tao doi tuong r4 = ham tao co tham so
	MyRectangle* r4 = new MyRectangle(2, 3,(char*)"blue");
	r4->output();
	//tao doi tuong r4 = ham tao copy
	MyRectangle r5(r2);
	r5.output();

	delete r3; // ham huy
	delete r4;

	return 1;*/
}

	



