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
    int at = 2;
    int i = 2;
    int ahh = 0;
    while (i <= nn)
    {
        ahh = at + 2 * i + 1;
        i = i + 1;
        at = ahh;
    }
    return ahh;
}