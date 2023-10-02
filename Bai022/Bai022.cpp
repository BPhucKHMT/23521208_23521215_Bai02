
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int donvi(int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	cout << "Don vi la " << donvi(n);
	system("pause");
	return 0;
}
int donvi(int nn)
{
	int dv = nn % 10;
	return dv;
}