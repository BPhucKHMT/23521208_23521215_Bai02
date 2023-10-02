#include <iostream>
using namespace std;
float TinhAn(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Ket qua: ";
    cout << TinhAn(n);
    return 0;
}
float TinhAn(int nn)
{
    float at = 2;
    int i = 2;
    float ahh = 0;
    while (i <= nn)
    {
        ahh = (float)(at * at + 2) / (2 * at);
        i = i + 1;
        at = ahh;
    }
    return ahh;
}