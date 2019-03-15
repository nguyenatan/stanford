#include <iostream>

using namespace std;

int main()
{
    double so1, so2;
    cout << "so1? "; cin >> so1;
    cout << "so2? "; cin >> so2;

    double tong = so1 + so2;
    double tich = so1 * so2;
    double hieu = so1 - so2;
    double thuong = so1 / so2;

    cout << "so1 + so2 = " << tong << endl;
    cout << "so1 x so2 = " << tich << endl;
    cout << "so1 - so2 = " << hieu << endl;
    cout << "so1 / so2 = " << thuong << endl;

    return 0;
}