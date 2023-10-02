#include <iostream>
using namespace std;
int DemChuSoDauTien(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So luong chu so dau tien: ";
    cout << DemChuSoDauTien(n);
    return 0;
}
int DemChuSoDauTien(int nn)
{
    int dt = nn;
    while (dt >= 10)
        dt = dt / 10;
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv == dt)
            dem++;
        t = t / 10;
    }
    return dem;
}