
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float tinhtong(float);
int main()
{
	float x;
	cout << "Nhap x ";
	cin >> x;
	cout << " Tong la " << tinhtong(x);
	system("pause");
	return 0;
}
float tinhtong(float xx)
{
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * i;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;

	}
	return s;
}