
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
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / (i * (i + 1));
		s = s + e;
		i = i + 1;

	}
	return s;
}