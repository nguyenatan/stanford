#include <iostream>
#include <cmath>

using namespace std;

// Ham kiem tra so nguyen to
bool isPrime(int n)
{
    if (n <= 1)
        return 0;
    
    for (int i = 2; i <= sqrt(n); ++i)
        if (!(n % i))
            return 0;
    
    return 1;
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int sum = 0;

    cout << "Cac so nguyen to tu 1 toi " << n << ":";

    for (int i = 1; i <= n; ++i)
        if (isPrime(i)) {
            cout << ' ' << i;
            sum += i;
        }

    cout << "\nTong cac so nguyen to = " << sum << "\n";

    return 0;
}