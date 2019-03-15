#include <iostream>
#include <iomanip> // std::setprecision()

using namespace std;

int main()
{
    int second;
    do {
        cout << "Nhap so giay tu 0 toi 86399: ";
        cin >> second;
    } while (second < 0 || second > 86399);

    int minute = second / 60;
    int hour = minute / 60;
    
    minute %= 60;
    second %= 60;

    cout << setfill('0') << setw(2) << hour << ":";
    cout << setfill('0') << setw(2) << minute << ":";
    cout << setfill('0') << setw(2) << second << endl;

    return 0;
}