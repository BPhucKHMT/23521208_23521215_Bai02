
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
	float e = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;

	}
	return s;
}