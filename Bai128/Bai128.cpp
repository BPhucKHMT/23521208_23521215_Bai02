
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void tang(float&, float&);
int main()
{
	float a;
	cout << "Nhap a ";
	cin >> a;
	float b;
	cout << "Nhap b ";
	cin >> b;
	tang(a, b);
	cout << " Ket qua la " << a << " " <<b;
	system("pause");
	return 0;
}
void tang(float& aa, float& bb)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
}