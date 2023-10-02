
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float tinhtong(float, int);
int main()
{
	float x;
	cout << "Nhap x";
	cin >> x;
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << " Tong la " << tinhtong(x,n);
	system("pause");
	return 0;
}
float tinhtong(float xx, int nn)
{
	float s = 0;
	float t = 1;
	int m = 0;
	int i = 1;
	int dau = -1;

	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		s = s + (dau * t) / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}