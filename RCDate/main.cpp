#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

int main()
{
	
	RCDate d1(20160328);
	RCDate d2;
	d2 = d1 - 30;
	
	cout << d2.GetASCIIDate() << endl;
	cout << d1.GetASCIIDate() << endl;

	
	
 	system("Pause");
	return 0;
}