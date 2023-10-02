#include <iostream>
using namespace std;
float LuyThua(float, int);
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    cout << "Luy thua: ";
    cout << LuyThua(x, n);
    return 0;
}
float LuyThua(float xx, int nn)
{
    float t = 1;
    int i = 1;
    while (i <= nn)
    {
        t = t * xx;
        i = i + 1;
    }
    return t;
}