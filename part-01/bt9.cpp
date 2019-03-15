#include <iostream>
#include <cmath> // pow()

using namespace std;

int main()
{
    double so1, so2, so3;
    cout << "so1? "; cin >> so1;
    cout << "so2? "; cin >> so2;
    cout << "so3? "; cin >> so3;

    double trungBinhCong = (so1 + so2 + so3) / 3;
    cout << "Trung binh cong = " << trungBinhCong << endl;

    double trungBinhNhan = so1 * so2 * so3;
    if (trungBinhNhan < 0)
        cout << "Khong co ket qua trung binh nhan\n";
    else {
        trungBinhNhan = pow(trungBinhNhan, 1.0/3);
        cout << "Trung binh nhan = " << trungBinhNhan << endl;
    }

    return 0;
}