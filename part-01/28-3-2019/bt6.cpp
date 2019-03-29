#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    cout << "Cac so chinh phuong tu 2 toi " << n << ":\n";

    for (int i = 2; i <= n; ++i)
        if ((int)sqrt(i) == sqrt(i))
            cout << i << "\n";

    return 0;
}