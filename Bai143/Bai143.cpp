
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
bool perfectnumber(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	if (perfectnumber ( n ))
		cout << "HT ";
	else
		cout << "Ko Ht ";


	system("pause");
	return 0;
}
bool perfectnumber(int nn)
{
	float s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == nn)
		return true;
	return false;
}