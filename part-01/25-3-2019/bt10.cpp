#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int count = 0;
    int sum = 0;

    for (int i = 2; i <= n; i += 2)
        if (!(n % i)) {
            ++count;
            cout << "Uoc chan thu " << count << ": " << i << "\n";
            sum += i;
        }

    cout << "Tong cac uoc chan = " << sum << "\n";

    return 0;
}