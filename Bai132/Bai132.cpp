#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
void XuLy(float, float, float, float, float, float, float, float);
int main()
{
    float xA, yA;
    Nhap(xA, yA);
    float xB, yB;
    Nhap(xB, yB);
    float xC, yC;
    Nhap(xC, yC);
    float xM, yM;
    Nhap(xM, yM);
    XuLy(xA, yA, xB, yB, xC, yC, xM, yM);
    return 0;
}
void Nhap(float& xx, float& yy)
{
    cout << "Nhap hoang do: ";
    cin >> xx;
    cout << "Nhap tung do: ";
    cin >> yy;
}
void XuLy(float xA, float yA, float xB, float yB, float xC, float yC, float xM, float yM)
{
    float SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
    float SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
    float SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
    float SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
    float S = SMAB + SMBC + SMAC;
    if (S == SABC)
        cout << "M trong";
    else
        cout << "M ngoai";
}