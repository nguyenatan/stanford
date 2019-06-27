#include <iostream>
#include <climits>

using namespace std;

class KySu
{
    private:
        string hoTen;
        string ngaySinh;
        string queQuan;
        string nganhHoc;

    public:
        int namTotNghiep;
        static int count;

        KySu()
        {
            ++count;
        }

        // Nhap thong tin ky su.
        void input()
        {
            cout << "Ho ten: ";
            cin.ignore();
            getline(cin, this->hoTen);

            cout << "Ngay sinh: ";
            getline(cin, this->ngaySinh);

            cout << "Que quan: ";
            getline(cin, this->queQuan);

            cout << "Nganh hoc: ";
            getline(cin, this->nganhHoc);

            cout << "Nam tot nghiep: ";
            cin >> this->namTotNghiep;
        }

        // Thong tin cua ky su.
        void info()
        {
            cout << "--------------------";
            cout << "\nHo ten: "            << this->hoTen;
            cout << "\nNgay sinh: "         << this->ngaySinh;
            cout << "\nQue quan: "          << this->queQuan;
            cout << "\nNganh hoc: "         << this->nganhHoc;
            cout << "\nNam tot nghiep: "    << this->namTotNghiep;
            cout << "\n";
        }
};

int KySu::count = 0;

int main()
{
    int size;
    cout << "Nhap so luong ky su: ";
    cin >> size;

    KySu listKySu[size];

    cout << "Nhap thong tin " << KySu::count << " ky su\n";

    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ".\n";
        listKySu[i].input();
    }

    cout << "\nDanh sach " << KySu::count << " ky su\n";

    for (int i = 0; i < size; ++i) {
        cout << i + 1 << " ";
        listKySu[i].info();
    }

    // Thong tin cac ky su tot nghiep gan day nhat.
    // Tinh khoang cach nam nho nhat de tim ky su co nam tot nghiep lon nhat.
    int distance = INT_MAX;
    int latestYear = -1;

    for (int i = 0; i < size; ++i)
        if (distance > 2019 - listKySu[i].namTotNghiep &&
            (2019 - listKySu[i].namTotNghiep) > -1) {
            distance = 2019 - listKySu[i].namTotNghiep;
            latestYear = listKySu[i].namTotNghiep;
        }

    if (latestYear != -1) {
        cout << "\nThong tin cac ky su tot nghiep gan day nhat\n";

        for (int i = 0; i < size; ++i)
            if (latestYear == listKySu[i].namTotNghiep)
                listKySu[i].info();
    } else
        cout << "\nERROR!!!\n";
    
    return 0;
}
