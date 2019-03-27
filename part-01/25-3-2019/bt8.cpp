#include <iostream>

using namespace std;

int main()
{
    int a, n;
    
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap n: "; cin >> n;

    cout << n << " so boi cua " << a << " la: 0, ";

    int congSai = a;
    for (int i = 1; i++ < n; a += congSai)
        cout << a << (i < n ? ", " : "\n");

    return 0;
}