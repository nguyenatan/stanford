#include <iostream>

using namespace std;

int main()
{
    int n;
    do {
        cout << "Nhap n (n > 10): ";
        cin >> n;
    } while (n <= 10);

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 1; i <= n; ++i) {
        if (!(i % 2))
            sumEven += i;
        else
            sumOdd += i;
    }

    cout << "Tong cac so le (1-" << n << "): " << sumOdd << "\n";
    cout << "Tong cac so chan (1-" << n << "): " << sumEven << "\n";

    return 0;
}