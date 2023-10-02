#include <iostream>
#include <cmath>
using namespace std;
float Tinh();
int main()
{
    cout << "Ket qua: ";
    cout << Tinh();
    return 0;
}
float Tinh()
{
    float s = 3;
    int dau = 1;
    float e = 3;
    int i = 2;
    float accuracy = pow(10, -6);
    while (e >= accuracy)
    {
        e = (float)4 / (i * (i + 1) * (i + 2));
        s = s + dau * e;
        i = i + 2;
        dau = -dau;
    }
    return s;
}