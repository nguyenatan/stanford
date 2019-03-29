#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    if ((int)sqrt(n) == sqrt(n))
        cout << n << " la so chinh phuong\n";
    else
        cout << n << " khong phai la so chinh phuong\n";

    return 0;
}