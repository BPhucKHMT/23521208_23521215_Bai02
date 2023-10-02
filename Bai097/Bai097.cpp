#include <iostream>
#include <cmath>
using namespace std;
float Tong(float, int);
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong la: ";
    cout << Tong(x, n);
    return 0;
}
float Tong(float xx, int nn)
{
    float s = 0;
    float t = 1;
    int i = 1;
    while (i <= nn)
    {
        t = t * xx;
        s = sqrt(t + s);
        i = i + 1;
    }
    return s;
}