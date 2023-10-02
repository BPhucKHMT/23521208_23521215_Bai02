
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float max(float, float);
int main()
{
	float a;
	cout << "Nhap a ";
	cin >> a;
	float b;
	cout << "Nhap b ";
	cin >> b;
	
	cout << " Ket qua la " << max(a,b);
	system("pause");
	return 0;
}
float max(float aa, float bb)
{
	float lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}