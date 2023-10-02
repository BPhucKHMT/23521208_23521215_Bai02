#include <iostream>
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
    float s = 1;
    int i = 1;
    while (i <= nn)
        s = (float)1 / (1 + s);
    return s;
}