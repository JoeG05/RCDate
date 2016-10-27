#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

int main()
{
	//	Test GetASCIIDate
	RCDate d1(20161015);
	string test = d1.GetASCIIDate();
	int d3 = 20161026;
	cout << test << endl;

	// Test SetActualToday
	RCDate d2(0);
	d2.SetActualToday();
	test = d2.GetASCIIDate();
	cout << test << endl;
	
	if (d2 != d1)
		cout << "Not equal" << endl;

	if (d2 != d3)
		cout << "Not equal" << endl;
	system("Pause");
	return 0;
}