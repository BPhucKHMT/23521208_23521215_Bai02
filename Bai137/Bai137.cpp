#include <iostream>
using namespace std;
float XuLy(float);
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Ket qua: ";
    cout << XuLy(x);
    return 0;
}
float XuLy(float xx)
{
    float f;
    if (xx >= 5)
        f = 2 * xx * xx + 5 * xx + 9;
    else
        f = -2 * xx * xx - 4 * xx - 9;
    return f;
}