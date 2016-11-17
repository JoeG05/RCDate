#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

void PrintDate(RCDate d);
int main()
{
	// Test constructors	
	RCDate d1;			
	RCDate d2(d1);		
	RCDate d3(1981, 11, 23);
	RCDate d4(20030202);

	PrintDate(d2);
	PrintDate(d3);
	PrintDate(d4);

	// set date
	d2.SetToday();
	PrintDate(d2);

	d2.SetActualToday();
	PrintDate(d2);

	// Assignment operators
	RCDate d5 = d2;
	PrintDate(d5);
	d5 = 20161115;
	PrintDate(d5);

	// difference between dates
	int diff = d5 - d2;
	cout << diff << endl;

	// +/-
	d5 = d4 - 10;
	PrintDate(d5);

	d5 = d5 + 10;
	PrintDate(d5);

	// comparison operators
	cout << endl;
	cout << (d5 == d2) << endl;
	cout << (d5 == 20030202) << endl;
	cout << (d5 != d2) << endl;
	cout << (d5 != 20030202) << endl;
	cout << (d5 < d2) << endl;
	cout << (d5 < 20030202) << endl;
	cout << (d5 <= d2) << endl;
	cout << (d5 <= 20030202) << endl;
	cout << (d5 > d2) << endl;
	cout << (d5 > 20030202) << endl;
	cout << (d5 >= d2) << endl;
	cout << (d5 >= 20030202) << endl;

	// unary operators
	d5++;
	PrintDate(d5);
	d5--;
	PrintDate(d5);

 	system("Pause");
	return 0;
}

void PrintDate(RCDate d)
{
	cout << d.GetASCIIDate() << endl;
}