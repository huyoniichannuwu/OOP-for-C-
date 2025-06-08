#include "date.h"

int main()
{
	Date r1;
	r1.print();
	cout << endl;
	
	Date r2(-2, 11, 2005);
	r2.print();
	if (r2.kiemtraDMY()) {
		cout <<"Ngay thang hop le" << endl;
	}
	else
		cout << "Ngay thang khong hop le!"<<endl;
	
	if (!r2.kiemtraNamnhuan()) {
		cout <<"khong phai ";
	}
	cout << "la nam nhuan" << endl <<endl;

	Date r3(13, 05, 2008);
	r3.print();
	if (r3.kiemtraDMY()) {
		cout << "Ngay thang hop le" << endl;
	}
	else
		cout << "Ngay thang khong hop le!" << endl;

	if (!r3.kiemtraNamnhuan()) {
		cout << "khong phai ";
	}
	cout << "la nam nhuan" << endl << endl;


	
}
