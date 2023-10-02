#include <iostream>
using namespace std;
void XuLy(float, float, float);
int main()
{
    float x, y, z;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;
    XuLy(x, y, z);
    return 0;
}
void XuLy(float xx, float yy, float zz)
{
    if (xx + yy > zz || xx + zz > yy || yy + zz > xx)
    {
        if (xx == yy && yy == zz)
            cout << "Deu";
        else if ((xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == xx * xx + yy * yy))
            if (xx == yy || yy == zz || zz == xx)
                cout << "Vuong can";
            else
                cout << "Vuong";
        else if (xx == yy || yy == zz || zz == xx)
            cout << "Can";
        else
            cout << "Thuong";
    }
    else
        cout << "Ko";
}