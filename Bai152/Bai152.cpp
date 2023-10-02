#include <iostream>
using namespace std;
int ktDang3m(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (ktDang3m(n) == 1)
        cout << "La dang 3^m";
    else
        cout << "Ko la dang 3^m";
    return 0;
}
int ktDang3m(int nn)
{
    int flag = 1;
    int t = nn;
    while (t > 1)
    {
        int du = t % 3;
        if (du != 0)
            flag = 0;
        t = t / 3;
    }
    return flag;

}