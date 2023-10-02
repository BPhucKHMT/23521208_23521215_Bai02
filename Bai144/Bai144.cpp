
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
bool primenumber(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	
	if (primenumber ( n))
		cout << "NT";
	else
		cout << "Ko Nt";


	system("pause");
	return 0;
}
bool primenumber(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		return true;
	return false;
}