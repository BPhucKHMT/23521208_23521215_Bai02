#include <iostream>
#include <iomanip>
using namespace std;
void XuLy(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    XuLy(n);
    return 0;
}
void XuLy(int nn)
{
    int t = 1;
    int i = 1;
    cout << "Day gia tri: ";
    while (i <= nn)
    {
        t = t * i;
        cout << t << setw(8);
        i = i + 1;
    }
}