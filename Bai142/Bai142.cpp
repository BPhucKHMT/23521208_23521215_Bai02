
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int reverse(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	
	cout << "So la" << reverse (n);

	system("pause");
	return 0;
}
int reverse(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}