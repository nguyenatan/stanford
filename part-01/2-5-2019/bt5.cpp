#include <iostream>

using namespace std;

// Ham kiem tra so hoan thien.
bool isPerfectNumber(int value)
{
    int sum = 0;

    for (int i = 1; i < value; ++i)
        if (!(value % i))
            sum += i;
        
    return sum == value ? 1 : 0;
}

int main()
{
    int row, col;
    cin >> row >> col;

    int **arr = new int*[row];
    for (int i = 0; i < row; ++i)
        arr[i] = new int[col];

    // Nhap mang.
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> arr[i][j];

    // Xuat mang.
    cout << "\n";
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cout << arr[i][j] << (j != col - 1 ? ' ' : '\n');

    // 1. Tim so chan dau tien trong ma tran.
    int firstEvenNum = 1;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (!(arr[i][j] & 1)) {
                firstEvenNum = arr[i][j];
                goto jump;
            }
    
jump:
    if (firstEvenNum != 1)
        cout << "1. So chan dau tien = " << firstEvenNum << "\n";
    else
        cout << "1. Ma tran khong co so chan.\n";

    // 2. Dem so luong gia tri min, max trong ma tran.
    int min = arr[0][0], max = arr[0][0];
    int countMin = 0, countMax = 0;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {

            if (min > arr[i][j]) min = arr[i][j];

            if (max < arr[i][j]) max = arr[i][j];
        }

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j) {

            if (min == arr[i][j]) ++countMin;

            if (max == arr[i][j]) ++countMax;
        }
    
    cout << "2. " << countMin << " min = " << min << "\n";
    cout << "   " << countMax << " max = " << max << "\n";

    // 3. Tim so hoan thien nho nhat trong ma tran.
    int minPerfectNumber = 2147483647;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (isPerfectNumber(arr[i][j]))
                if (minPerfectNumber > arr[i][j])
                    minPerfectNumber = arr[i][j];

    if (minPerfectNumber != 2147483647)
        cout << "3. So hoan thien nho nhat = " << minPerfectNumber << "\n";
    else
        cout << "3. Khong co so hoan thien trong ma tran.\n";
    
    // 4. Tim so nguyen xuat hien nhieu nhat trong ma tran.
    
    
    return 0;
}
