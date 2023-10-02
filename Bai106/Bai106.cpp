
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
float tinhtong(float x)
{
	float xx = (x * M_PI) / 180;
	float s = xx;
	float t = xx;
	int m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}