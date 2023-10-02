
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void sohangn(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	sohangn(n);
	system("pause");
	return 0;
}
void sohangn(int nn)
{
	float at = 1;
	float bt = 1;
	int i = 2;
	float ahh;
	float bhh;
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