#include "Student.h"

Student::Student()			//default contruct
{
	name = "Huynh Gia Huy";
	age = 18;
	gpa = 3.2;
	numberofStudent = 0;
}
Student::Student(string n, int a, double g)		//parameterized contruct
{
	name = n;
	age = a;
	gpa = g;
	numberofStudent++;
}
Student::~Student() 
{
	cout << "Destructor is called" << endl;
}
string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}
double Student::getGpa()
{
	return gpa;
}
void Student::setName(string newName)
{
	name = newName;
}
void Student::setAge(int newAge)
{
	if (newAge > 0)
		age = newAge;
	else
	{
		cout << "Invalid Age Data. Try again!" << endl;
		return;
	}
}
void Student::setGpa(double newGpa)
{	
	if (newGpa > 0 && newGpa <= 4.0)
		gpa = newGpa;
	else
	{
		cout << "Invalid GPA Data.Try again!"<<endl;
		return;
	}

}


void Student::display()
{
	cout << "Student Fullname: " << name << endl;
	cout << "Ages: " << age << endl;
	cout << "GPA: " << gpa << endl;
}
int Student::getnumberofStudent() {
	return numberofStudent;
}
int Student::numberofStudent = 1;  //bien tinh~