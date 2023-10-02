#include <iostream>
using namespace std;
int UocLeLonNhat(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Uoc le lon nhat: ";
    cout << UocLeLonNhat(n);
    return 0;
}
int UocLeLonNhat(int nn)
{
    int t = nn;
    while (t % 2 == 0)
        t = t / 2;
    return t;
}