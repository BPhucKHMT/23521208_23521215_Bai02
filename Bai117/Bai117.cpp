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
    int att = -1;
    int at = 3;
    int  t = 2;
    int i = 2;
    int ahh = 0;
    while (i <= nn)
    {
        t = t * 2;
        ahh = 5 * t + 5 * at - att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    return ahh;
}