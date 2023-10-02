
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void chuyendoi(float&, float&);
int main()
{
	float a;
	cout << "Nhap a ";
	cin >> a;
	float b;
	cout << "Nhap b ";
	cin >> b;
	chuyendoi(a, b);
	cout << " Ket qua la " << a << " " << b;
	system("pause");
	return 0;
}
void chuyendoi(float& aa, float& bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
}