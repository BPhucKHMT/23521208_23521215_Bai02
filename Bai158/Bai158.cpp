#include <iostream>
using namespace std;
int DemChuSoLonNhat(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So luong chu so lon nhat: ";
    cout << DemChuSoLonNhat(n);
    return 0;
}
int DemChuSoLonNhat(int nn)
{
    int lc = nn % 10;
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv > lc)
            lc = dv;
        t = t / 10;
    }
    t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv = lc)
            dem++;
        t = t / 10;
    }
    return dem;
}