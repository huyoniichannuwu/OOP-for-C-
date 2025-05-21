#include "Student.h"

void Student::print() {
	cout << "MSSV cua sinh vien la: " << mssv << endl;
	cout << "Ho va ten cua sinh vien la: "<< hoten << endl;
	cout << "Diem trung binh la: "<< dtb << endl;

}
void Student::input() {
	cout << "Nhap MSSV cua sinh vien: "; cin >> mssv;
	cout << "Nhap ho ten sinh vien: ";
	cin.ignore();					// xoa bo nho dem
	getline(cin, hoten);           // hoac cin.getline(hoten,30)   su dung voi char *p
	cout << "Diem trung binh: "; cin >> dtb;
}