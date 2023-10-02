#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
float cv(int, float);


int main()
{
	float r; 
	cout << "Nhap r ";
	cin >> r;
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "P la" << cv(n,r);
	system("pause");
	return 0;
}
float cv(int nn, float rr)
{
	return 2 * nn * rr * (float)sin(M_PI / nn);
}