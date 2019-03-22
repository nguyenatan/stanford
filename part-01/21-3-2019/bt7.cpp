#include <iostream>
#include <cctype> // isalpha()

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (isalpha(c))
        cout << "La ky tu chu\n";
    else
        cout << "Khong phai ky tu chu\n";

    return 0;
}