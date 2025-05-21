//Implementaion
#include "Fraction.h"

void Fraction::input()				//input
{
	do
	{
		cout << "enter numerator of the first fraction: "; cin >> numerator;
		cout << "enter denominator of the first fraction: "; cin >> denominator;
		cout << "enter a new fraction (numerator): "; cin >> numerator2;
		cout << "enter a new fraction (denominator): "; cin >> denominator2;
	} 
	while (denominator == 0 || denominator2 == 0);
}




double Fraction::add()				//sum of 2 fractions
{
	double sum;	
	
	sum = (double)((numerator * denominator2) + (numerator2 * denominator)) / (denominator * denominator2);
	return sum;
	
	//if not use sum function -> use return (double) ((numerator * denominator2) + (numerator2 * denominator))/ (denominator * denominator2);  
}




void Fraction::print()				//output
{
	//double sum = add();  
	cout << "the first Fraction: " << numerator << "/" << denominator << endl;
	cout << "the second Fraction: " << numerator2 << "/" << denominator2 << endl;
	cout << "sum of 2 fractions (in fraction form): " << numerator << "/" << denominator << " + " << numerator2 << "/" << denominator2 << " = " << ((numerator * denominator2) + (numerator2 * denominator)) << "/" << (denominator * denominator2) << endl;
	cout << "sum of 2 fractions (in R form): " << add() << endl;
}



