#include "utility.h"

int main()
{
    int arr[100], size = 0;

    cout << "Nhap n: "; cin >> size;
    input(arr, size);
    output(arr, size);
    
    int result = 0;

    result = sumPosInteger(arr, size);
    cout << "1. Tong cac so nguyen duong = " << result << "\n";

    result = sumNegInteger(arr, size);
    cout << "2. Tong cac so nguyen am = " << result << "\n";

    result = sumArray(arr, size);
    cout << "3. Tong cac so nguyen = " << result << "\n";

    result = sumPrime(arr, size);
    cout << "4. Tong cac so nguyen to = " << result << "\n";

    int sumEven = 0, sumOdd = 0;

    sumEvenOdd(arr, size, sumEven, sumOdd);
    cout << "5. Tong cac so nguyen chan = " << sumEven << "\n";
    cout << "   Tong cac so nguyen le = " << sumOdd << "\n";

    int max = 0, min = 0, indexMax = 0, indexMin = 0;

    maxMin(arr, size, max, min, indexMax, indexMin);
    cout << "6. Max = " << max << "\n";
    cout << "   Vi tri max = " << indexMax << "\n";
    cout << "   Min = " << min << "\n";
    cout << "   Vi tri min = " << indexMin << "\n";

    maxMinPosInteger(arr, size, max, min);
    cout << "7. So nguyen duong max = " << max << "\n";
    cout << "   So nguyen duong min = " << min << "\n";

    maxMinNegInteger(arr, size, max, min);
    cout << "8. So nguyen am max = " << max << "\n";
    cout << "   So nguyen am min = " << min << "\n";

    output(arr, size);

    cout << "9. Xoa phan tu dau tien: ";
    deleteHead(arr, size);
    output(arr, size);

    cout << "   Xoa phan tu cuoi cung: ";
    deleteTail(arr, size);
    output(arr, size);

    int index = 0;
    cout << "   Xoa phan tu tai vi tri: ";
    cin >> index;

    deleteAtX(arr, size, index);
    output(arr, size);

    int value = 0;
    cout << "10. Nhap gia tri: "; cin >> value;

    cout << "    Chen vao phan tu dau tien: ";
    insertHead(arr, size, value);
    output(arr, size);

    cout << "    Chen vao phan tu cuoi cung: ";
    insertTail(arr, size, value);
    output(arr, size);

    cout << "    Chen tai vi tri: "; cin >> index;
    insertAtX(arr, size, value, index);
    output(arr, size);

    int countNeg = 0, countPos = 0, countZero = 0;

    countIntegerType(arr, size, countNeg, countPos, countZero);
    cout << "11. So luong so am = " << countNeg << "\n";
    cout << "    So luong so duong = " << countPos << "\n";
    cout << "    So luong so 0 = " << countZero << "\n";

    int count = 0;

    countSumPerSqr(arr, size, count, result);
    cout << "12. So luong so chinh phuong = " << count << "\n";
    cout << "    Tong cac so chinh phuong = " << result << "\n";

    cout << "13. Sap xep tang dan: ";
    ascending(arr, size);
    output(arr, size);

    cout << "    Sap xep giam dan: ";
    descending(arr, size);
    output(arr, size);

    return 0;
}