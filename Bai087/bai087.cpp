
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
	float s = xx;
	float t = xx;
	int i = 3;
	int dau = -1;

	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;

	}
	return s;
}