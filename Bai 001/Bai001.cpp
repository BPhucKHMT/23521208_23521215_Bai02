#include <iostream>
#include <cmath>
using namespace std;
float khoangcach(float, float, float, float);
float khoangcach(float xx1, float yy1, float xx2, float yy2)
{
	return sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
}
int main()
{
	float x1;
	cout << "Nhap x1: ";
	cin >> x1;
	float y1;
	cout << "Nhap y1: ";
	cin >> y1;
	float x2;
	cout << "Nhap x2: ";
	cin >> x2;
	float y2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Khoang cach la " << khoangcach(x1,y1,x2,y2);
	system("pause");
	return 0;
}