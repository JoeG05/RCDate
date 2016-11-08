#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

int main()
{
	
	RCDate d1(20161015);

	RCDate d2 = d1 + 100;
	cout << d2.GetASCIIDate() << endl;
	cout << d1.GetDayOfWeek() << endl;
	cout << d2.GetDayOfWeek() << endl;
	system("Pause");
	return 0;
}