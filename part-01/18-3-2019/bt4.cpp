#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Nhap 1 so nguyen: "; cin >> number;

    if (number > 0)
        cout << "Day la so duong\n";
    else if (number < 0)
        cout << "Day la so am\n";
    else
        cout << "Day la so khong\n";

    return 0;
}