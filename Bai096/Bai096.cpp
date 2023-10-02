#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cin >> n;
    cout << "Tong la: ";
    cout << Tong(n);
    return 0;
}
float Tong(int nn)
{
    float s = 0;
    int t = 1;
    int i = 1;
    while (i <= nn)
    {
        t = t * i;
        s = sqrt(t + s);
        i = i + 1;
    }
    return s;
}