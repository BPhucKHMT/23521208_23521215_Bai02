#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
void KiemTraTamGiac(float, float, float, float, float, float);
int main()
{
    float xA, yA;
    Nhap(xA, yA);
    float xB, yB;
    Nhap(xB, yB);
    float xC, yC;
    Nhap(xC, yC);
    KiemTraTamGiac(xA, yA, xB, yB, xC, yC);
    return 0;
}
void Nhap(float& xx, float& yy)
{
    cout << "Nhap hoang do: ";
    cin >> xx;
    cout << "Nhap tung do: ";
    cin >> yy;
}
void KiemTraTamGiac(float xA, float yA, float xB, float yB, float xC, float yC)
{
    float a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
    float c = sqrt((xC - xB) * (xC - xB) + (yC - yA) * (yC - yA));
    if (a + b > c || a + c > b || b + c > a)
        cout << "La tam giac";
    else
        cout << "Ko la tam giac";
}