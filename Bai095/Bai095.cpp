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
    int i = nn;
    while (i > 0)
    {
        s = sqrt(i + s);
        i = i - 1;
    }
    return s;
}