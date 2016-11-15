#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

int main()
{
	
	RCDate d1(20160301);
	RCDate d2;
	d1++;
	
	cout << d1.GetASCIIDate() << endl;

	
	
 	system("Pause");
	return 0;
}