#include <iostream>
#include <iomanip>
using namespace std;
void LietKeUocSoLe(int);
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    LietKeUocSoLe(n);
    return 0;
}
void LietKeUocSoLe(int nn)
{
    cout << "Cac uoc so le:\n";
    int i = 1;
    while (i <= nn)
    {
        if (nn % i == 0)
            cout << setw(4) << i;
        i = i + 2;
    }
}