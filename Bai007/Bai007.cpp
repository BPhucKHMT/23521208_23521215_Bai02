#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float doC(float);

int main()
{
	float f;
	cout << "Nhap F";
	cin >> f;
	cout << "C la " << doC(f);

	system("pause");
	return 0;
}
float doC(float ff)
{
	return (float)5 / 9 * (ff - 32);
}