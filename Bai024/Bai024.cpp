
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int hangtram(int);

int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;	
	cout << "Hang tram la" << hangtram(n);
	system("pause");
	return 0;
}
int hangtram(int nn)
{
	int ht = (n / 100) % 10;
	return ht;
}