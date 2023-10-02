#include <iostream>
using namespace std;
void GiaiBacNhat(float, float);
int main()
{
    float a;
    cout << "Nhap a: ";
    cin >> a;
    float b;
    cout << "Nhap b: ";
    cin >> b;
    GiaiBacNhat(a, b);
    return 0;
}
void GiaiBacNhat(float aa, float bb)
{
    if (aa == 0)
        if (bb == 0)
            cout << "VN";
        else
            cout << "VSN";
    else
    {
        float x = -bb / aa;
        cout << x;
    }
}