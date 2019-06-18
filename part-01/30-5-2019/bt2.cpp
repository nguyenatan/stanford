#include <iostream>

using namespace std;

class SinhVien
{
    private:
        string maSinhVien;
        string hoTen;
        string lop;
        float diem1, diem2, diem3;
        float tong;
    public:
        static int count;

        SinhVien()
        {
            ++count;
            this->tong = this->diem1 + this->diem2 + this->diem3;
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
};

int SinhVien::count = 0;

template<typename T>
void swap(T& a, T& b)
{
    T c(a); a = b; b = c;
}

void sort(SinhVien *list, int n)
{
    bool swapped = false;

    for (int i = 0; i < n - 1; ++i) {
        
    }
}

int main()
{



    return 0;
}