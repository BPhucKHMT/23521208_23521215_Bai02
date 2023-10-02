#include <iostream>
using namespace std;
int TichUocSoLe(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tich cac uoc so le: ";
    cout << TichUocSoLe(n);
    return 0;
}
int TichUocSoLe(int nn)
{
    int t = 1;
    int i = 1;
    while (i <= nn)
    {
        if (nn % i == 0)
            t = t * i;
        i = i + 2;
    }
    return t;
}