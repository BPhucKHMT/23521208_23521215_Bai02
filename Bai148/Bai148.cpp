
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int toanchan(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	
	if (toanchan(n)==1)
		cout << "TC ";
	else
		cout << "Ko TC ";
	system("pause");
	return 0;
}
int toanchan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}