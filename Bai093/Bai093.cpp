#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong la: ";
    cout << Tong(n);
    return 0;
}
float Tong(int nn)
{
    float s = 0;
    int i = 1;
    while (i <= nn)
    {
        s = sqrt(2 + s);
        i = i + 1;
    }
    return s;
}