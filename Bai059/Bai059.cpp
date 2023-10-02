#include <iostream>
using namespace std;
int DemChuSo(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So luong chu so nguyen : ";
    cout << DemChuSo(n);
    return 0;
}
int DemChuSo(int nn)
{
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        dem++;
        t = t / 10;
    }
    return dem;
}