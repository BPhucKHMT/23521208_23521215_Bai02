
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int tontaichan(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	if (tontaichan(n)== 1)
		cout << "TT";
	else
		cout << "Ko TT";
	system("pause");
	return 0;
}
int tontaichan(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;

	}
	return flag;
}