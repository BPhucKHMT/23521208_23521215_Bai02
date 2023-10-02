#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float dientich(float);

int main()
{
	float r;
	cout << "Nhap r";
	cin >> r;
	cout << "Dien tich la " << dientich(r);
	system("pause");
	return 0;
}
float dientich(float rr)
{
	return  (M_PI)*rr * rr;
}