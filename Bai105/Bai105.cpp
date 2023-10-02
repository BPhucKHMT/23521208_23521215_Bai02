
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
	int m = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}