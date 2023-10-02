#include <iostream>
using namespace std;
int TongUocSoChan(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong cac uoc so chan: ";
    cout << TongUocSoChan(n);
    return 0;
}
int TongUocSoChan(int nn)
{
    int s = 0;
    int i = 2;
    while (i <= nn)
    {
        if (nn % i == 0)
            s = s + i;
        i = i + 2;
    }
    return s;
}