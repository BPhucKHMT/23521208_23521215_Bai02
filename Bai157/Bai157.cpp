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
    float s = 0;
    int i = 1;
    cout << "Day gia tri: ";
    while (i <= nn)
    {
        s = s + (float)1 / i;
        cout << s << setw(8);
        i = i + 1;
    }
}