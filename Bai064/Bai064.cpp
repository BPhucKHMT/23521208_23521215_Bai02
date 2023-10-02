
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int max(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << "so can tim la" << max(n);
	system("pause");
	return 0;
}
int max(int nn) 
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;

	}
	return lc;
}