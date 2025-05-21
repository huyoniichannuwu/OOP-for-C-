// ho ten, tuoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//ho ten tuoi

#include <iostream>
#include <string>
using namespace std;
// lớp
class Student {
private:
    string name;
    int age;
public:

    void setName(string name)
    {
        this->name = name;      // = don vi name thuoc trong class name
    }
    void setAge(int age)
    {
        if (age > 0)
            this->age = age;    // = don vi age thuoc trong class age
    }
    string getName()  
    {
        return name;
    };
    int getAge()
    {
        return age;
    };
    void print()                       //in ra
    {
        cout << "Ho ten hoc sinh:" << name << ", " << age << " tuoi"<< endl;
    };
};

//ham lay ho ten hoc sinh
    void hotenHocsinh(string name, int age = 18)   //default value = 18
    {
        cout << "Ho ten hoc sinh: " << name << endl;
        cout << age << " tuoi";
    }
    void hotenHocsinh(int age, string name)    // age truoc, ten sau
    {
        cout << age << " tuoi" << endl;
        cout << "Ho ten hoc sinh: " << name << endl;
    }

   int main()
    {

       Student s1, s2;
        // S1.name = "Nguyen van A"  -> lỗi do ko lấy ngẫu nhiên
        s1.setName("Nguyen van A");
        s1.setAge(17);
        s1.setAge(-100);

        s2.setName("Huynh Gia Huy");
        s2.setAge(18);
       
        string name;
        int age;
        getline(cin, name);
        cin >> age;

        //age = -100 -> sai


        //ham hotenHocsinh
        //hotenHocsinh(name, age);  
        // //neu doi tuong S1 thi
        s1.print(); '\n';
        s2.print();
    }
   