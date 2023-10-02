
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int squarenumber(int);
int main()
{
	int n;
	cout << "Nhap n ";
	cin >> n;
	if (squarenumber(n) == 1)
		cout << "La CP ";
	else
		cout << "Ko CP ";


	system("pause");
	return 0;
}
int squarenumber(int nn)
{
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i = i + 1;
	}
	return flag;
}