#include <iostream>
using namespace std;
int TongUocNhoHonN(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong cac uoc nho hon n: ";
    cout << TongUocNhoHonN(n);
    return 0;
}
int TongUocNhoHonN(int nn)
{
    int s = 0;
    int i = 1;
    while (i < nn)
    {
        if (nn % i == 0)
            s = s + i;
        i = i + 1;
    }
    return s;
}