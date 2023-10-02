#include <iostream>
using namespace std;
int ktTangDan(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (ktTangDan(n) == 1)
        cout << "Tang";
    else
        cout << "Ko tang";
    return 0;
}
int ktTangDan(int nn)
{
    int flag = 1;
    int t = nn;
    while (t >= 10)
    {
        int dv = t % 10;
        int hc = (t / 10) % 10;
        if (hc > dv)
            flag = 0;
        t = t / 10;
    }
    return flag;
}