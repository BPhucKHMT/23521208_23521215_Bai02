#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float doF(float);
int main()
{
	float c;
	cout <<"Nhap C";
	cin >> c;
	cout << "F la" << doF(c);
	system("pause");
	return 0;
}
float doF(float cc)
{
	return (float)9 / 5 * cc + 32;
}