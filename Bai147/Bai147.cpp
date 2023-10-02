
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int toanle(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	
	if (toanle(n) == 1)
		cout << "Tl ";
	else
		cout << "Ko Tl ";


	system("pause");
	return 0;
}
int toanle(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	return flag;
}