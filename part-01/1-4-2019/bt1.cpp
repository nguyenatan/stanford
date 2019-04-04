#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    while (n <= -10 || n >= 10) {
        cout << "Nhap n: ";
        cin >> n;
    }

    return 0;
}