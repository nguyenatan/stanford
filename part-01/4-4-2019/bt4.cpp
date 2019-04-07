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
    int n, m;
    cout << "Nhap n, m: ";
    cin >> n >> m;

    cout << "Cac so nguyen to tu " << n << " toi " << m << ":";

    while (n <= m) {
        if (isPrime(n))
            cout << ' ' << n;
        ++n;
    }

    cout << "\n";

    return 0;
}