#include <iostream>
using namespace std;
int ktGiamDan(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (ktGiamDan(n) == 1)
        cout << "Tang";
    else
        cout << "Ko tang";
    return 0;
}
int ktGiamDan(int nn)
{
    int flag = 1;
    int t = nn;
    while (t >= 10)
    {
        int dv = t % 10;
        int hc = (t / 10) % 10;
        if (hc < dv)
            flag = 0;
        t = t / 10;
    }
    return flag;
}