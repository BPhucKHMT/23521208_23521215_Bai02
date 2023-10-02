#include <iostream>
using namespace std;
float XuLy(float);
int main()
{
	float x;
	cin >> x;
	cout << "x9: ";
	cout << XuLy(x);
	return 0;
}
float XuLy(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * xx;
	return x9;
}