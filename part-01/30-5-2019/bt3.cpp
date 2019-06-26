#include <iostream>

using namespace std;

class Sach
{
	private:
		string maSach;
		string tenSach;
		string theLoai;
		int soLuong;
		string tenTacGia;
	public:
		static int count;

		Sach()
		{
			++count;
		}

		// Nhap thong tin sach.
		void input()
		{
			cout << "Ma sach: ";
			getline(cin, this->maSach);

			cout << "Ten sach: ";
			getline(cin, this->tenSach);

			cout << "The loai: ";
			getline(cin, this->theLoai);

			cout << "So luong: ";
			cin >> this->soLuong;

			cout << "Ten tac gia: ";
			cin.ignore();
			getline(cin, this->tenTacGia);
		}

		// Hien thi thong tin sach.
		void info()
		{
			cout << "--------------------";
			cout << "\nMa sach: "		<< this->maSach;
			cout << "\nTen sach: "		<< this->tenSach;
			cout << "\nThe loai: "		<< this->theLoai;
			cout << "\nSo luong: "		<< this->soLuong;
			cout << "\nTen tac gia: "	<< this->tenTacGia;
			cout << '\n';
		}

		bool find_maSach(string maSach)
		{
			if (this->maSach == maSach)
				return 1;
			return 0;
		}

		bool find_tenSach(string tenSach)
		{
			if (this->tenSach == tenSach)
				return 1;
			return 0;
		}

		bool find_theLoai(string theLoai)
		{
			if (this->theLoai == theLoai)
				return 1;
			return 0;
		}

		bool find_tenTacGia(string tenTacGia)
		{
			if (this->tenTacGia == tenTacGia)
				return 1;
			return 0;
		}
};

int Sach::count = 0;

int main()
{
	int size;
	cout << "Nhap so luong sach: ";
	cin >> size;

	Sach listSach[size];

	cout << "Nhap thong tin " << Sach::count << " quyen sach\n";

	cin.ignore();

	for (int i = 0; i < size; ++i) {
		cout << i + 1 << ".\n";
		listSach[i].input();
	}

	// Tim sach theo ma sach.
	cout << "Tim sach theo ma sach: ";

	string maSach;
	getline(cin, maSach);

	for (int i = 0; i < size; ++i)
		if (listSach[i].find_maSach(maSach))
			listSach[i].info();

	// Tim sach theo ten sach.
	cout << "Tim sach theo ten sach: ";

	string tenSach;
	getline(cin, tenSach);

	for (int i = 0; i < size; ++i)
		if (listSach[i].find_tenSach(tenSach))
			listSach[i].info();

	// Tim sach theo the loai.
	cout << "Tim sach theo the loai: ";

	string theLoai;
	getline(cin, theLoai);

	for (int i = 0; i < size; ++i)
		if (listSach[i].find_theLoai(theLoai))
			listSach[i].info();

	// Tim sach theo ten tac gia.
	cout << "Tim sach theo ten tac gia: ";

	string tenTacGia;
	getline(cin, tenTacGia);

	for (int i = 0; i < size; ++i)
		if (listSach[i].find_tenTacGia(tenTacGia))
			listSach[i].info();

	return 0;
}
