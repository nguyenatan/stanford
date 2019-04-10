#include <iostream>

using namespace std;

int main()
{
    int n;

    do {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
    } while (n <= 0);

    bool odd = true, even = true;
    int num = n;

    while (n) {
        int i = n % 10;

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