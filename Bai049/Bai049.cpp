
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void uocso(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	uocso(n);
	system("pause");
	return 0;
}
void uocso(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << " ";
		i = i + 1;
	}
}