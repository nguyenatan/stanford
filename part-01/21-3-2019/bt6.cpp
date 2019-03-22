#include <iostream>

using namespace std;

int main()
{
    unsigned u;
    cout << "Nhap so nguyen duong: "; cin >> u;

    if (!(u % 2) && !(u % 3) && !(u % 5) && u > 0)
        cout << "Nhap so dung yeu cau\n";
    else
        cout << "Nhap so sai yeu cau\n";

    return 0;
}