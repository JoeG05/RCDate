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
	RCDate d2;
	d2.SetActualToday();
	int d3 = 20161107;

	if (d2 <= d3)
		cout << "true" << endl;
	
	system("Pause");
	return 0;
}