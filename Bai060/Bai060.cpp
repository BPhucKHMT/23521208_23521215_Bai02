#include <iostream>
using namespace std;
int TichChuSoDuong(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tich cac chu so nguyen duong: ";
    cout << TichChuSoDuong(n);
    return 0;
}
int TichChuSoDuong(int nn)
{
    int tich = 1;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        tich = tich * dv;
        t = t / 10;
    }
    return tich;
}