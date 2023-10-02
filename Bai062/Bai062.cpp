
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int tinhtong(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	cout << "Tong la" << tinhtong(n);
	system("pause");
	return 0;
}
int tinhtong(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;

	}
	return s;
}