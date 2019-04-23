#include "utility.h"
#include <cmath>
#include <cstring> // memcpy()
#include <algorithm> // remove()

using namespace std;

int main()
{
    int size;
    cout << "Nhap n: "; cin >> size;

    int *arr = new int[size];

    input(arr, size);

    // 1. Tong binh phuong cac so tai vi tri le.
    int result = 0;

    for (int i = 1; i < size; i += 2)
        result += pow(arr[i], 2);

    cout << "1. Tong binh phuong cac so tai vi tri le = ";
    cout << result << "\n";

    // 2. Tim cac cap 2 phan tu gan nhau la boi cua 10,
    // va thay the 2 so do bang -1.
    
    // Sao chep mang.
    int *des = new int[size];
    memcpy(des, arr, size * sizeof(int));

    for (int i = 0; i < size-1; ++i)
        if (!(des[i] % 10) && !(des[i+1] % 10)) {
            des[i] = -1;
            des[i+1] = -1;
        }

    cout << "2. Thay the -1: ";
    output(des, size);

    delete[] des;

    // 3. Kiem tra mang co phai la cap so cong khong.
    int congSai = arr[1] - arr[0];
    bool isCapSoCong = ( arr[size-1] == (arr[0] + (size - 1) * congSai) );

    cout << "3. Day "; output(arr, size);
    if (isCapSoCong) cout << "       la cap so cong.\n";
    else cout << "       khong phai la cap so cong.\n";

    // 4. Xoa tat ca cac phan tu co gia tri == x.
    int x;
    cout << "4. Nhap x: "; cin >> x;

    int *begin = arr;
    int *end = arr + size;

    end = remove(begin, end, x);

    cout << "   Xoa " << x << ": ";
    output(arr, end - begin);

    delete[] arr;

    return 0;
}