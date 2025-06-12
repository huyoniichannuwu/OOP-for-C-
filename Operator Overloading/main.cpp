#include "Date2.h"


//Qua tai toan tu << la ham toan cuc
ostream& operator<<(ostream& out, const Date2& d)
{
	out << d.getD() << "/" << d.getM() << "/" << d.getY()<<endl;
	return out;
}

int main()
{
	Date2 d1(9, 10, 2025), d2(13, 05, 2024);
	if (d1 > d2)
		cout << "d1 > d2" << endl;
	else
		cout << "Error" << endl;
	cout << d1<< d2;							//phai su dung dc
	//cout << d2;
	Date2 d = ++d1;
	cout << d << d1 << endl;
	
	return 0;

}

// (cout<<d1) -> void ( nếu void ) <<d2 dùng hàm ostream& operator<<(ostream& out, const Date2& d)