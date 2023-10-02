#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
void Xuat(float, float);
float DienTich(float, float, float, float, float, float);
int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	float x3, y3;
	Nhap(x3, y3);
	cout << "Diem thu nhat: ";
	Xuat(x1, y1);
	cout << "\nDiem thu hai: ";
	Xuat(x2, y2);
	cout << "\nDiem thu ba: ";
	Xuat(x3, y3);
	cout << "\nDien tich: ";
	cout << DienTich(x1, y1, x2, y2, x3, y3);
	return 0;
}
void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoang do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}
void Xuat(float xx, float yy)
{
	cout << "\nHoanh do: " << xx;
	cout << "\nTung do: " << yy;
}
float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
