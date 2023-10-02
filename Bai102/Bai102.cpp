
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float tinhtong();
int main()
{
	
	cout << " Tong la " << tinhtong();
	system("pause");
	return 0;
}
float tinhtong()
{
	float s = 0;
	float e = 0.5;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;

	}
	return s;
}