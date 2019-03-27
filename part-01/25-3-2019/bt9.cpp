#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int sum = 0;
    for (int i = 1; i <= n/2; ++i)
        if (!(n % i))
            sum += i;

    if (sum == n)
        cout << n << " la so hoan thien\n";
    else
        cout << n << " khong phai la so hoan thien\n";

    return 0;
}