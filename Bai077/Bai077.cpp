#include <iostream>
#include <cmath>
using namespace std;
float Tong(float, int);
int main()
{
    float k;
    cout << "Nhap k: ";
    cin >> k;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong la: ";
    cout << Tong(k, n);
    return 0;
}
float Tong(float kk, int nn)
{
    float s = 0;
    int i = 1;
    while (i <= nn)
    {
        s = s + pow(i, kk);
        i = i + 1;
    }
    return s;
}