
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float chuvi(float, float, float, float, float, float);

int main()
{
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;
	float y1;
	cout << "Nhap y1: ";
	cin >> y1;
	float x2;
	cout << "Nhap x2: ";
	cin >> x2;
	float y2;
	cout << "Nhap y2: ";
	cin >> y2;
	float x3;
	cout << "Nhap x3: ";
	cin >> x3;
	float y3;
	cout << "Nhap y3: ";
	cin >> y3;
	cout << "Chu vi la " << chuvi(x1, y1, x2, y2, x3, y3);
	system("pause");
	return 0;
}
float chuvi(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3)
{
	float a = sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
	float b = sqrt((xx3 - xx2) * (xx3 - xx2) + (yy3 - yy2) * (yy3 - yy2));
	float c = sqrt((xx3 - xx1) * (xx3 - xx1) + (yy3 - yy1) * (yy3 - yy1));

	float p = a + b + c;
	return p;
}