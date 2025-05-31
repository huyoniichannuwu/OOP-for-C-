#include "Student.h"
int main(void)
{
	Student s0;
	Student s1("Huynh Gia Han", 19, 4.0);
	Student s2("Nguyen Ngoc Truc Thy",20,3.5);
	
	s0.display(); 
	cout << endl;
	s1.display();
	cout << endl;
	s2.display();
	cout << endl;
	cout << "Number of students: " << s2.getnumberofStudent() << endl;;
	string newName;
	int newAge;
	double newGpa;
	cout << "Nhap ho ten hoc sinh moi: "; getline(cin, newName);
	s0.setName(newName);
	cout << "Ages: "; cin >> newAge;
	s0.setAge(newAge);
	cout << "Gpa: "; cin >> newGpa;	
	
	s0.setGpa(newGpa);
	s0.display();
	return 0;
}