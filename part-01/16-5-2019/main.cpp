#include <iostream>

using namespace std;

struct thi_sinh
{
	int soBaoDanh;
	string hoTen;
	int namSinh;
	float toan, ly, hoa;
};

// 1. Nhap thong tin thi sinh.
void input(struct thi_sinh *arr, size_t size)
{
	for (int i = 0; i < size; ++i) {
		cout << "Nhap so bao danh: ";
		cin >> arr[i].soBaoDanh;
		cout << "Nhap ho ten: ";
		getline(cin, arr[i].hoTen);
		cout << "Nhap nam sinh: ";
		cin >> arr[i].namSinh;
		cout << "Nhap diem toan, ly, hoa: ";
		cin >> arr[i].toan;
		cin >> arr[i].ly;
		cin >> arr[i].hoa;
	}
}

// 2. Lay ra top 5 thi sinh co diem cao nhat, khong co diem liet.
// Ham tinh diem trung binh toan ly hoa.
float diemTrungBinh(struct thi_sinh thiSinh)
{
	return (thiSinh.toan + thiSinh.ly + thiSinh.hoa) / 3;
}

struct thi_sinh* top5(struct thi_sinh *arr, size_t size)
{
	for (int i = 0; i < size; ++i) {
		
		if (diemTrungBinh)
	}
}

int main()
{
	
	
	return 0;
}
