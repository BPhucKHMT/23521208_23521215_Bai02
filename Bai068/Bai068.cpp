
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
	cout << " Tong la " << tinhtong(n);
	system("pause");
	return 0;
}
int tinhtong(int nn)
{
	int s = 0;
	int t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * i;
		s = s + t;
		i = i + 1;

	}
	return s;
}