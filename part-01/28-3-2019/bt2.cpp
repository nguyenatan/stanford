#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    unsigned sum = 0;

    for (int i = 1; i <= n; ++i) {
        cout << "Tong ";

        for (int j = 1; j <= i; ++j) {
            cout << j << (j < i ? " + " : " = ");
            sum += j;
        }
        
        cout << sum << "\n";
        sum = 0;
    }

    return 0;
}