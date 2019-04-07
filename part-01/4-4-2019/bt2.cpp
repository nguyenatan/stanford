#include <iostream>

using namespace std;

int main()
{
    int n;
    do {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    if (!(n % 2)) {
        cout << "Uoc chan lon nhat = " << n << "\n";
        cout << "Uoc chan nho nhat = " << 2 << "\n";
    } else
        cout << "Khong co uoc chan lon nhat, nho nhat\n";

    return 0;
}