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
	
	
	
	d2 = d1 - 1;
	cout << d2.GetASCIIDate() << endl;
	
	
 	system("Pause");
	return 0;
}