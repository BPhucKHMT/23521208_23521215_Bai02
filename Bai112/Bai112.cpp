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
    float s = (float)4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6;
    int t = 1;
    float e = 1;
    int i = 1;
    float accuracy = pow(10, -6);
    while (e >= accuracy)
    {
        t = t * 16;
        e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / t;;
        s = s + e;
        i = i + 1;
    }
    return s;
}