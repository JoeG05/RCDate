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
	cout << test << endl;

	// Test SetActualToday
	RCDate d2(0);
	d2.SetActualToday();
	test = d2.GetASCIIDate();
	cout << test << endl;
	
	RCDate d3 = d2;
	RCDate d4 = 20161123;

	cout << d3 << endl << d4 << endl;
	system("Pause");
	return 0;
}