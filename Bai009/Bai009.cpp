#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float dientich(int, float);

int main()
{
	float r;
	cout << "Nhap r ";
	cin >> r;
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "s la" << dientich(n,r);
	system("pause");
	return 0;
}
float dientich(int nn, float rr)
{
	return (float)1 / 2 * nn * rr * rr * (float)sin(2 * M_PI / nn);
}