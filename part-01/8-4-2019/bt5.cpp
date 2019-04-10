#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so dong: ";
    cin >> n;

    cout << "1.\n\n";

    for (int i = 1; i <= n; ++i) {
        string a(i, '*');
        cout << a << "\n";
    }

    cout << "\n2.\n\n";

    for (int i = n; i >= 1; --i) {
        string a(i, '*');
        cout << a << "\n";
    }

    cout << "\n3.\n\n";

    for (int i = 1; i <= n; ++i) {
        string s(n - i, ' ');
        string a(i, '*');
        cout << s << a << "\n";
    }

    cout << "\n4.\n\n";

    for (int i = n; i >= 1; --i) {
        string s(n - i, ' ');
        string a(i, '*');
        cout << s << a << "\n";
    }

    cout << "\n5.\n\n";

    for (int i = 0; i < n; ++i) {
        string s(n - i - 1, ' ');
        string a(2 * i + 1, '*');
        cout << s << a << "\n";
    }

    cout << "\n6.\n\n";

    for (int i = n - 1; i >= 0; --i) {
        string s(n - i - 1, ' ');
        string a(2 * i + 1, '*');
        cout << s << a << "\n";
    }

    return 0;
}
