#pragma once
#include <iostream>
#include "Math.h"
using namespace std;

int radius;

int area() 
{
	double pi = 2 * acos(0.0);
	cout << "Type the radius of your cirlce: " << endl;
	cin >> radius;
	cout << "The area will be: " << endl;
	cout<< pi * (radius * radius);

	return 0;
	
}
