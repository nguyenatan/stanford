#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;

    do {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    bool odd = true, even = true;
    unsigned long long num = n;

    while (n) {
        unsigned long long i = n % 10;

        if (!(i % 2))
            odd = false;
        else
            even = false;

        n /= 10;
    }

    if (odd)
        cout << num << " toan chu so le\n";
    else if (even)
        cout << num << " toan chu so chan\n";
    else
        cout << "Chan le lan lon\n";

    return 0;
}
