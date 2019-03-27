#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int mul = 1;

    for (int i = 2; i <= n; i += 2)
        mul *= i;

    cout << "Tich cac so chan (1-" << n << "): " << mul << "\n";

    return 0;
}