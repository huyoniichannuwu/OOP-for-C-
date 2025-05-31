#pragma once
#include<iostream>
#include <math.h>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int age;
	double gpa;
	//static
	static int numberofStudent;
public:
	//new attributes	
	string getName();
	int getAge();
	double getGpa();
	//change the attributes
	void setName(string newName);
	void setAge(int newAge);
	void setGpa(double newGpa);
	//static
	static int getnumberofStudent();
	//contruct
	Student();
	Student(string name, int age, double gpa); 
	~Student();
	void display(); 
};

