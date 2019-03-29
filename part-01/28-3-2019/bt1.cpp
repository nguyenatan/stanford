#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    unsigned sum = 0;
    cout << "Tong ";

    for (int i = 1; i <= n; ++i) {
        cout << i << (i < n ? " + " : " = ");
        sum += i;
    }

    cout << sum << "\n";

    return 0;
}