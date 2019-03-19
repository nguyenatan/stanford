#include <iostream>
#include <cctype> // toupper(), tolower()

using namespace std;

int main()
{
    char c;
    cout << "Nhap ky tu: "; cin >> c;

    if ('a' <= c && c <= 'z')
        cout << (char)toupper(c) << endl;
    
    if ('A' <= c && c <= 'Z')
        cout << (char)tolower(c) << endl;
    
    if ('0' <= c && c <= '9')
        cout << "Day la ky tu so\n";

    return 0;
}
