
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void tang(float&, float&, float&);
int main()
{
	float a;
	cout << "Nhap a ";
	cin >> a;
	float b;
	cout << "Nhap b ";
	cin >> b;
	float c;
	cout << "Nhap c ";
	cin >> c;
	tang(a, b, c);
	cout << " Ket qua la " << a << " " << b << " " << c;
	system("pause");
	return 0;
}
void tang(float& aa, float& bb, float& cc)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		temp = bb;
		bb = cc;
		cc = temp;
	}
}