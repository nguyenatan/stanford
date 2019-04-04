#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    do {
        cout << "Nhap n (n > 0): "; cin >> n;
        sum += (n > 0 ? n : 0);
    } while (n > 0);

    cout << "Tong cac so nguyen duong = " << sum << "\n";

    return 0;
}