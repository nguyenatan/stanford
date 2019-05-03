#include <iostream>
#include <string>
#include <algorithm> // remove

using namespace std;

int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    char ch;
    cout << "Nhap ky tu: ";
    cin >> ch;

    // 1. Dem ky tu ch co trong chuoi.
    int count = 0;

    for (int i = 0, len = s.length(); i < len; ++i)
        if (s[i] == ch)
            ++count;

    cout << "1. Co " << count << " ky tu " << ch << ".\n";

    // 2. Xoa toan bo ky tu ch co trong chuoi.
    s.erase(remove(s.begin(), s.end(), ch), s.end());

    cout << "2. " << s << "\n";

    // 3. Chen ky tu ch vao vi tri N trong chuoi.
    int n;
    cout << "3. Nhap vi tri: "; cin >> n;

    string s2 = "";
    s2 += ch;

    s.insert(n, s2);

    cout << s << "\n";

    return 0;
}