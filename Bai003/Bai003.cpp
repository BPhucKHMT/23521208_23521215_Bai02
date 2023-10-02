#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float chuvi(float);

int main()
{
	cout << " hello ;
	float r;
	cout << "Nhap r";
	cin >> r;
	cout << "Chu vi la" << chuvi(r);
	system("pause");



	return 0;
}
float chuvi(float rr)
{
	return 2 * M_PI * rr;
}