#include <iostream>
using namespace std;
float XuLy(float);
int main()
{
	float x;
	cin >> x;
	cout << "x7: ";
	cout << XuLy(x);
	return 0;
}
float XuLy(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x7 = x6 * xx;
	return x7;
}