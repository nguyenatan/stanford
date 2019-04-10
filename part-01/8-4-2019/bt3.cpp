#include <iostream>

using namespace std;

// Ham tim UCLN.
int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

// Ham tim BCNN.
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    do {
        cout << "Nhap so nguyen duong a, b: ";
        cin >> a >> b;
    } while (a <= 0 || b <= 0);

    cout << "Uoc chung lon nhat = " << gcd(a, b) << "\n";
    cout << "Boi chung nho nhat = " << lcm(a, b) << "\n";

    return 0;
}
