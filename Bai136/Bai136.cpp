#include <iostream>
#include <iomanip>
using namespace std;
void LietKeNamNhuan(int, int);
bool KiemTra(int);
int main()
{
    int x, y;
    cout << "Nam dau: ";
    cin >> x;
    cout << "Nam cuoi: ";
    cin >> y;
    LietKeNamNhuan(x, y);
    return 0;
}
void LietKeNamNhuan(int xx, int yy)
{
    int n = xx;
    while (n <= yy)
    {
        if (KiemTra(n))
            cout << n << setw(8);
        n = n + 1;
    }
}
bool KiemTra(int nn)
{
    bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
    bool dk2 = (nn % 400 == 0);
    return dk1 || dk2;
}