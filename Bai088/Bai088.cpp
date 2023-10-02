
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float tinhtong( int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << " Tong la " << tinhtong(n);
	system("pause");
	return 0;
}
float tinhtong( int nn)
{
	float s = 0;
	int m = 0;
	int i = 2;
	int dau = +1;

	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -dau;

	}
	return s;
}