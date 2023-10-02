#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float thetich(float);

int main()
{
	float r;
	cout << "Nhap r";
	cin >> r;
	cout << "V la" << thetich(r);

	system("pause");
	return 0;
}
float thetich(float rr)
{
	return 	 (float)4 / 3 * 3.14 * rr * rr * rr;
}