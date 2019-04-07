#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Nhap nam: "; cin >> year;

    if ((!(year % 4) && (year % 100)) || !(year % 400))
        cout << "Nam " << year << " la nam nhuan\n";
    else
        cout << "Nam " << year << " khong phai la nam nhuan\n";

    return 0;
}