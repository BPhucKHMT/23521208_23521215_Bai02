
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int firstnumber(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	cout << "So la" << firstnumber(n) ;
	system("pause");
	return 0;
}
int firstnumber(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}