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
    cout << "Nhap x, n: ";
    cin >> x >> n;

    double sum = 1;

    for (int i = 1; i <= n; ++i)
        sum += pow(x, i) / factorial(i);

    cout << "Tong = " << sum << "\n";

    sum = 0;

    for (int i = 0; i <= n; ++i)
        sum += pow(-1, i) * (pow(x, 2*i+1) / factorial(2*i+1));

    cout << "Tong = " << sum << "\n";

    return 0;
}
