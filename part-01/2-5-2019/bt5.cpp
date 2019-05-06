#include <iostream>
#include <map>
#include <cmath>

using namespace std;

/* HAM TINH NANG */
// Ham kiem tra so hoan thien.
bool isPerfectNumber(int value)
{
    int sum = 0;

    for (int i = 1; i < value; ++i)
        if (!(value % i))
            sum += i;
        
    return sum == value ? 1 : 0;
}

// Ham kiem tra so nguyen to.
bool isPrime(int value)
{
    if (value < 2) return 0;

    for (int i = 2; i <= sqrt(value); ++i)
        if (!(value % i))
            return 0;

    return 1;
}

/* HAM MAIN */
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
    map<int, int> hash;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            hash[arr[i][j]]++;

    int maxCount = 0;

    for (map<int, int>::iterator it = hash.begin(); it != hash.end(); ++it)
        if (maxCount < it->second)
            maxCount = it->second;
        
    cout << "4. So nguyen xuat hien nhieu nhat:";
    for (map<int, int>::iterator it = hash.begin(); it != hash.end(); ++it)
        if (maxCount == it->second)
            cout << ' ' << it->first;
    
    cout << "\n";

    // 5. Liet ke cac dong chua gia tri nho nhat.
    cout << "5. Cac dong chua gia tri nho nhat:\n";
    
    for (int i = 0; i < row; ++i) {
        loop:
        for (int j = 0; j < col; ++j) {

            if (arr[i][j] == min) {

                // In hang chua gia tri nho nhat.
                for (int k = 0; k < col; ++k)
                    cout << arr[i][k] << (k != col - 1 ? ' ' : '\n');
                
                // Fix bug segmentation fault (core dumped).
                if (i == row - 1)
                    break;
                else {
                    ++i;
                    goto loop;
                }
            }
        }
    }

    // 6. Liet ke cac dong co nhieu so nguyen to nhat.
    int maxPrimeCount = 0, currentPrimeCount = 0;

    // Tim so luong so nguyen to nhieu nhat theo moi hang.
    for (int i = 0; i < row; ++i) {

        currentPrimeCount = 0;

        // Dem so luong so nguyen to theo moi hang.
        for (int j = 0; j < col; ++j)
            if (isPrime(arr[i][j]))
                ++currentPrimeCount;

        if (maxPrimeCount < currentPrimeCount)
            maxPrimeCount = currentPrimeCount;
    }

    if (!maxPrimeCount)
        cout << "6. Khong co so nguyen to trong ma tran.\n";
    else {
        cout << "6. Cac dong co nhieu so nguyen to nhat:\n";

        for (int i = 0; i < row; ++i) {

            currentPrimeCount = 0;

            // Dem so luong so nguyen to theo moi hang.
            for (int j = 0; j < col; ++j)
                if (isPrime(arr[i][j]))
                    ++currentPrimeCount;

            // In dong co nhieu so nguyen to nhat.
            if (maxPrimeCount == currentPrimeCount)
                for (int k = 0; k < col; ++k)
                    cout << arr[i][k] << (k != col - 1 ? ' ' : '\n');
        }
    }

    // 7. Hoan vi 2 dong a va b.
    int a, b;
    
    cout << "7. Hoan vi 2 dong a va b.\n";
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    for (int j = 0; j < col; ++j) {
        int temp = arr[a][j];
        arr[a][j] = arr[b][j];
        arr[b][j] = temp;
    }

    // Xuat mang.
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cout << arr[i][j] << (j != col - 1 ? ' ' : '\n');

    // 8. Hoan vi 2 cot a va b.
    cout << "8. Hoan vi 2 cot a va b.\n";
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    for (int i = 0; i < row; ++i) {
        int temp = arr[i][a];
        arr[i][a] = arr[i][b];
        arr[i][b] = temp;
    }

    // Xuat mang.
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cout << arr[i][j] << (j != col - 1 ? ' ' : '\n');

    // Xoa cap phat dong.
    for (int i = 0; i < row; ++i)
        delete[] arr[i];
    
    delete[] arr;

    return 0;
}
