#include <iostream>
using namespace std;
int TimK(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "K: ";
    cout << TimK(n);
    return 0;
}
int TimK(int nn)
{
    int s = 0;
    int k = 0;
    while (s + k + 1 <= nn)
    {
        k = k + 1;
        s = s + k;
    }
    return k;
}