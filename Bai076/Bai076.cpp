#include <iostream>
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
    float s = 1 + xx;
    float t = xx;
    int m = 1;
    int i = 3;
    while (i <= 2 * nn + 1)
    {
        t = t * xx * xx;
        m = m * i * (i - 1);
        s = s + t / m;
        i = i + 2;
    }
    return s;
}