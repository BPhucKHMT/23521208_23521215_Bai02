#include <iostream>
using namespace std;
bool KiemTra(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (KiemTra(n))
        cout << "Nhuan";
    else
        cout << "Ko nhuan";
    return 0;
}
bool KiemTra(int nn)
{
    bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
    bool dk2 = (nn % 400 == 0);
    return dk1 || dk2;
}