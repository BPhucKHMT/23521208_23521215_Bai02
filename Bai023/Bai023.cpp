
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int hangchuc(int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	cout << "Hang chuc la" << hangchuc(n);
	system("pause");
	return 0;
}
int hangchuc(int nn)
{
	int hc = (nn / 10) % 10;
	return hc;
}