
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
bool kiemtra(float, float, float);
int main()
{
	float x;
	cout << "Nhap x ";
	cin >> x;
	float y;
	cout << "Nhap y ";
	cin >> y;
	float z;
	cout << "Nhap z ";
	cin >> z;
	if (kiemtra(x,y,z))
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	
	system("pause");
	return 0;
}
bool kiemtra(float xx, float yy, float zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
	{
		return true;
	}
	return false;
}