
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
bool doixung(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	
	if(doixung(n))
		cout << "La DX";
	else
		cout << "Ko DX";


	system("pause");
	return 0;
}
bool doixung(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		return true;
	return false;
}