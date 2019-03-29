#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    unsigned factorial = 1;

    for (int i = 2; i <= n; ++i) {
        cout << "Giai thua: 1 * ";

        for (int j = 2; j <= i; ++j) {
            cout << j << (j < i ? " * " : " = ");
            factorial *= j;
        }
        
        cout << factorial << "\n";
        factorial = 1;
    }

    return 0;
}