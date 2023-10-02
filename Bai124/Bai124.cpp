
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void tinhtong(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	tinhtong(n);
	system("pause");
	return 0;
}
void tinhtong(int nn)
{
	float at = 2;
	float bt = 1;
	int i = 2;
	float ahh;
	float bhh;
	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;

	}
	cout << " Ket qua la " << ahh << " " << bhh;
}