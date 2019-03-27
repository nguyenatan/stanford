#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int sum = 0;

    for (int i = n; i >= 3; --i)
        if (!(i % 3)) {
            cout << i << "\n"; 
            sum += i;
        }

    cout << "Tong cac so chia het cho 3 (1-" << n << "): " << sum << "\n";

    return 0;
}