
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int sohangn(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << " Ket qua la " << sohangn(n);
	system("pause");
	return 0;
}
int sohangn(int nn)
{
	int att = 1;
	int at = 1;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;

	}
	return ahh;
}