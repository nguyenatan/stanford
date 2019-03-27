#include <iostream>

using namespace std;

int main()
{
    int a, n;
    float congSai;

    cout << "Nhap a: "; cin >> a;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap cong sai: "; cin >> congSai;

    float sum = 0;
    float value = (float)a;
    
    for (int i = 1; i++ <= n; value += congSai) {
        cout << value << "\n";
        sum += value;
    }

    cout << "Tong day so = " << sum << "\n";

    return 0;
}