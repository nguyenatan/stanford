#include <iostream>

using namespace std;

int main()
{
    float toan, ly, hoa;
    cin >> toan >> ly >> hoa;

    float diemTrungBinh = (toan * 2 + ly + hoa) / 4;

    if (diemTrungBinh >= 9)
        cout << "La hoc sinh xuat sac\n";
    else if (8 <= diemTrungBinh && diemTrungBinh < 9)
        cout << "La hoc sinh gioi\n";
    else if (7 <= diemTrungBinh && diemTrungBinh < 8)
        cout << "La hoc sinh kha\n";
    else if (6 <= diemTrungBinh && diemTrungBinh < 7)
        cout << "La hoc sinh trung binh kha\n";
    else if (5 <= diemTrungBinh && diemTrungBinh < 6)
        cout << "La hoc sinh trung binh\n";
    else
        cout << "Khong dat yeu cau\n";

    return 0;
}