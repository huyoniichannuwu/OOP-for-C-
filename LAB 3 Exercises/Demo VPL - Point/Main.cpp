#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> 
#include "Point.h"

using namespace std;
int main() {

	ifstream fi("data.txt");

	//doc tong so diem tu file
	int n;
	fi >> n;

	//tao danh sach luu tru diem
	vector<Point> lstPoint;

	for (int i = 0; i < n; i++)
	{
		//Tao moi 1 diem
		Point p;
		//Doc du lieu cua diem tu file
		fi >> p;
		//Them diem vao danh sach
		lstPoint.push_back(p);
	}

	//Sap xep tang dan danh sach diem
	sort(lstPoint.begin(), lstPoint.end());

	//Xuat danh sach diem
	for (int i = 0; i < n; i++)
		cout << lstPoint[i] << endl;

	return 0;
}