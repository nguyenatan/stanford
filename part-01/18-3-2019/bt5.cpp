#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;

    char c;
    cout << "Nhap ky tu: "; cin >> c;

    if (c == '+')
        cout << a + b << endl;
    else if (c == '-')
        cout << a - b << endl;
    else if (c == '*')
        cout << a * b << endl;
    else if (c == '/')
        cout << a / b << endl;
    else if (c == '%')
        cout << a % b << endl;
    else
        cout << "Khong phai ky tu toan hoc\n";

    return 0;
}