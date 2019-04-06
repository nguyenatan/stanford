#include <iostream>
#include <cmath>

using namespace std;

unsigned factorial(unsigned n)
{
    return (!n || n == 1) ? 1 : n * factorial(n-1);
}

int main()
{
    int x, n;
    cout << "Nhap x: "; cin >> x;

    double sum = 1;

    for (int i = 1; i <= x; ++i)
        sum += pow(x, i) / factorial(i);

    cout << "Tong = " << sum << "\n";

    cout << "Nhap n: "; cin >> n;

    sum = 0;

    for (int i = 0, j = 1; i <= n; i += 2*n+1)
        sum += pow(-1, i) * (pow(j++, i) / factorial(i));

    cout << "Tong = " << sum << "\n";

    return 0;
}
