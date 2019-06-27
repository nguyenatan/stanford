#include <iostream>

using namespace std;

class SinhVien
{
    private:
        string maSinhVien;
        string hoTen;
        string lop;
        float diem1, diem2, diem3;
    public:
        float tong;
        static int count;

        SinhVien()
        {
            ++count;
        }

        void input()
        {
            cout << "Ma sinh vien: ";
            cin.ignore();
            getline(cin, this->maSinhVien);

            cout << "Ho ten: ";
            getline(cin, this->hoTen);

            cout << "Lop: ";
            getline(cin, this->lop);

            cout << "Diem mon thu 1: "; cin >> this->diem1;
            cout << "Diem mon thu 2: "; cin >> this->diem2;
            cout << "Diem mon thu 3: "; cin >> this->diem3;
        }

        void info()
        {
            cout << "--------------------";
            cout << "\nMa sinh vien: "      << this->maSinhVien;
            cout << "\nHo ten: "            << this->hoTen;
            cout << "\nLop: "               << this->lop;
            cout << "\nDiem mon thu 1: "    << this->diem1;
            cout << "\nDiem mon thu 2: "    << this->diem2;
            cout << "\nDiem mon thu 3: "    << this->diem3;
            cout << "\n";
        }

        bool find_MSV(string maSinhVien)
        {
            if (this->maSinhVien == maSinhVien)
                return 1;
            
            return 0;
        }

        bool find_lop(string lop)
        {
            if (this->lop == lop)
                return 1;
            
            return 0;
        }

        bool phaiThiLai()
        {
            if (this->diem1 < 5 || this->diem2 < 5 || this->diem3 < 5)
                return 1;
            
            return 0;
        }

	float tinhTong()
	{
		return this->diem1 + this->diem2 + this->diem3;
	}
};

int SinhVien::count = 0;

void swap(SinhVien& a, SinhVien& b)
{
    SinhVien c(a); a = b; b = c;
}

// Sap xep giam dan.
void sort(SinhVien *list, int n)
{
    bool swapped = false;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; ++j)
                if (list[j].tinhTong() < list[j+1].tinhTong()) {
                    swap(list[j], list[j+1]);
                    swapped = true;
                }
                
        if (!swapped)
            break;
    }
}

int main()
{
    int size;
    cout << "Nhap so luong sinh vien: ";
    cin >> size;

    SinhVien listSinhVien[size];

    cout << "Nhap thong tin " << SinhVien::count << " sinh vien\n";

    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ".\n";
        listSinhVien[i].input();
    }

    cout << "\nDanh sach " << SinhVien::count << " sinh vien\n";

    for (int i = 0; i < size; ++i) {
        cout << i + 1 << " ";
        listSinhVien[i].info();
    }

    // Tim kiem thong tin sinh vien theo ma sinh vien.
    string maSinhVien;
    
    cout << "\nTim kiem bang ma sinh vien: ";
    cin.ignore();
    getline(cin, maSinhVien);

    for (int i = 0; i < size; ++i)
        if (listSinhVien[i].find_MSV(maSinhVien))
            listSinhVien[i].info();

    // Hien thi tat ca sinh vien theo lop.
    string lop;

    cout << "\nHien thi tat ca sinh vien theo lop: ";
    getline(cin, lop);

    for (int i = 0; i < size; ++i)
        if (listSinhVien[i].find_lop(lop))
            listSinhVien[i].info();

    // Hien thi cac sinh vien khong phai thi lai.
    cout << "\nCac sinh vien khong phai thi lai:\n";

    for (int i = 0; i < size; ++i)
        if (!listSinhVien[i].phaiThiLai())
            listSinhVien[i].info();


    // Hien thi top 3 sinh vien co diem cao nhat.
    sort(listSinhVien, size);

    cout << "\nTop 3 sinh vien co diem cao nhat:\n";

    for (int i = 0; i < 3; ++i)
        listSinhVien[i].info();

    return 0;
}
