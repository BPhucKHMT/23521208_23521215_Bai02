#include <iostream>
using namespace std;
int Tong(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong la: ";
    cout << Tong(n);
    return 0;
}
int Tong(int nn)
{
    int s = 0;
    int t = 1;
    int i = 1;
    while (i <= nn)
    {
        t = t * i;
        s = s + i * t;
        i = i + 1;
    }
    return s;
}