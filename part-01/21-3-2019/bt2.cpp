#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (!a)
        cout << "Khong the tim nghich dao cua a\n";
    else
        cout << "So nghich dao cua " << a << " la " << 1.0/a << "\n";

    return 0;
}