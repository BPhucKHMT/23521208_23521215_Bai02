
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
bool tontaile(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	int flag = 0;
	
	if (tontaile(n))
		cout << "TT";
	else
		cout << "Ko TT";
	system("pause");
	return 0;
}
bool tontaile(int nn)
{
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			return true;
		t = t / 10;

	}
	return false;
}