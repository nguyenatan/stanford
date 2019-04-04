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
        int count = countDigits;

        while (countDigits--)
            cout << n / (int)pow(10, countDigits) % 10 << (countDigits ? ", " : "\n");

        cout << "So " << n << " co " << count << " chu so\n";
    }

    return 0;
}