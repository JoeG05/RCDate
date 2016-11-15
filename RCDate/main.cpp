#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "RCDate.h"

using namespace std;

int main()
{
	
	RCDate d1(20150228);
	RCDate d2(20150328);

	cout << d1 - d2 << endl;
	
	system("Pause");
	return 0;
}