#include <iostream>

using namespace std;

int sum_1_to_n(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    for (int i = a; i <= b; ++i)
        if (!(i & 1))
            cout << "Tong " << i << " = " << sum_1_to_n(i) << '\n';

    return 0;
}
