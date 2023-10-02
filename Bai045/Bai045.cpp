
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float tinhtong(int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << "S la" << fixed << setprecision(2) << tinhtong(n);
	system("pause");
	return 0;
}
float tinhtong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / (sqrt(i) + sqrt(i + 1));
		i = i + 1;
	}
	return s;
}