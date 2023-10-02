
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int tich(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << "Tich la" << tich(n);
	system("pause");
	return 0;
}
int tich(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;

	}
	return tich;
}