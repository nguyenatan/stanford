#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    unsigned factorial = 1;
    cout << "Giai thua: ";

    for (int i = 1; i <= n; ++i) {
        cout << i << (i < n ? " * " : " = ");
        factorial *= i;
    }

    cout << factorial << "\n";

    return 0;
}
