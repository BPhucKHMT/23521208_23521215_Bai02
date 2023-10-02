#include <iostream>
#include <iomanip>
using namespace std;
void Hailstone(int);
int main()
{
    int n;
    cin >> n;
    Hailstone(n);
    return 0;
}
void Hailstone(int nn)
{
    int ahh = nn;
    cout << ahh;
    while (ahh != 1)
    {
        if (ahh % 2 == 0)
            ahh = ahh / 2;
        else
            ahh = 3 * ahh + 1;
        cout << ahh << setw(8);
    }
}