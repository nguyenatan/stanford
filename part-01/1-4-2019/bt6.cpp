#include <iostream>

using namespace std;

// Ham tinh giai thua
unsigned factorial(unsigned n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n-1);
}

int main()
{
    int n;
    do {
        cout << "Nhap n le (n >= 1): ";
        cin >> n;
    } while (n < 1 || !(n % 2));

    double sum = 0;
    double mul = 1;

    for (int i = 1; i <= n; i += 2) {
        mul *= i;
        sum += mul / factorial(i-1);
    }

    cout << "f(" << n << ") = " << sum << "\n";

    return 0;
}