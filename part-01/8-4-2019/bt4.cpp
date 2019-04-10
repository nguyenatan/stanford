#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

int main()
{
    int a, b;

    do {
        cout << "Nhap so nguyen duong a, b: ";
        cin >> a >> b;
    } while (a <= 0 || b <= 0);

    int ucln = gcd(a, b);
    
    cout << "Uoc chung cua " << a << " va " << b << " la:";

    for (int i = 1; i <= ucln; ++i)
        if (!(ucln % i))
            cout << ' ' << i;

    cout << "\n";

    return 0;
}
