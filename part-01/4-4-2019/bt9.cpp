#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return (!(year & 3) && ((year % 25) || !(year & 15)));
}

int daysInMonth(int month, int year)
{
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2) {
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    }    
    
    return 31;
}

int main()
{
    int month, year;

    do {
        cout << "Nhap thang (1-12): ";
        cin >> month;
    } while (month < 1 || month > 12);

    cout << "Nhap nam: "; cin >> year;

    int thangTruoc = 0;
    int thangSau = 0;

    if (month == 1) {
        thangTruoc = 12;
        thangSau = 2;
    }
    else if (month == 12) {
        thangTruoc = 11;
        thangSau = 1;
    } else {
        thangTruoc = month - 1;
        thangSau = month + 1;
    }

    cout << "Thang " << month << " nam " << year << " co " << daysInMonth(month, year) << " ngay\n";
    cout << "Thang truoc do co " << daysInMonth(thangTruoc, year) << " ngay\n";
    cout << "Thang sau do co " << daysInMonth(thangSau, year) << " ngay\n";

    return 0;
}