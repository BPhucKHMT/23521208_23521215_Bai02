
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
	int at = 2;
	int bt = 1;
	int i = 2;
	int ahh;
	int bhh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;

	}
	cout << " Ket qua la " << ahh << " " << bhh;
}