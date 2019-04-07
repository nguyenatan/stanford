#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Nhap 2 so thuc: ";
    cin >> a >> b;

    if ((a < 0) == (b < 0))
        cout << a << " va " << b << " cung dau\n";
    else
        cout << a << " va " << b << " khac dau\n";

    return 0;
}