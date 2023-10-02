
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int soluong(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << "so luong  la" << soluong(n);
	system("pause");
	return 0;
}
int soluong(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem = dem + 1;
		t = t / 10;

	}
	return dem;
}