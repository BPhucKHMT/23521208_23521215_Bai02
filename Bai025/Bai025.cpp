
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void hoanvi(int&, int&);

int main()
{
	int a, b;
	cout << "Nhap a , b";

	cin >> a >> b;
	hoanvi(a, b);
	cout << " a, b sau hoan vi la " << a <<" "<< b;
	system("pause");
	return 0;
}
void hoanvi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;


}