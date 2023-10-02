#include <iostream>
using namespace std;
int TinhAn(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Ket qua: ";
    cout << TinhAn(n);
    return 0;
}
int TinhAn(int nn)
{
    int at = -2;
    int tt = 3;
    int pp = 7;
    int i = 2;
    int ahh = 0;
    while (i <= nn)
    {
        tt = tt * 3;
        pp = pp * 7;
        ahh = 5 * at + 2 * tt - 6 * pp + 12;
        i = i + 1;
        at = ahh;
    }
    return ahh;
}