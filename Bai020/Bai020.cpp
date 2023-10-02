#include <iostream>
using namespace std;
float XuLy(float);
int main()
{
	float x;
	cin >> x;
	cout << "x14: ";
	cout << XuLy(x);
	return 0;
}
float XuLy(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	float x14 = x10 * x4;
	return x14;
}