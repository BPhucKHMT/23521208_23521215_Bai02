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
    if (xx >= 0)
        if (xx <= 1)
            f = 5 * xx - 7;
        else
            f = 2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
    else
        f = -2 * xx * xx * xx + 6 * xx + 9;
    return f;
}