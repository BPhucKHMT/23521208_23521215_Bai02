#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float dientichxungquanh(float);

int main()
{
	float r;
	cout << "Nhap r ";
	cin >> r;
	cout << "S la " << dientichxungquanh(r);

	system("pause");
	return 0;
}
float dientichxungquanh(float rr)
{
	return 4 * 3.14 * rr * rr;
}