#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    if (!n)
        cout << n << "\n";
    else {
        int countDigits = log10( (n < 0 ? -n : n) ) + 1;

        for (; countDigits--; n /= 10)
            cout << n % 10 << (countDigits ? ", " : "\n");
    }

    return 0;
}