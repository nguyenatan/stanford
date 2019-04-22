#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include <cmath>

using namespace std;

// Nhap mang.
void input(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
}

// Xuat mang.
void output(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << (i != size-1 ? " " : "\n");
}

// 1. Tong cac so nguyen duong.
int sumPosInteger(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; ++i)
        if (arr[i] > 0)
            result += arr[i];

    return result;
}

// 2. Tong cac so nguyen am.
int sumNegInteger(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; ++i)
        if (arr[i] < 0)
            result += arr[i];
    
    return result;
}

// 3. Tong cac so nguyen.
int sumArray(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; ++i)
        result += arr[i];

    return result;
}


// 4. Tong cac so nguyen to.
// Ham kiem tra so nguyen to.
bool isPrime(int value)
{
    if (value < 2) return false;

    for (int i = 2; i <= sqrt(value); ++i)
        if (!(value % i))
            return false;
    
    return true;
}

int sumPrime(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; ++i)
        if (isPrime(arr[i]))
            result += arr[i];

    return result;
}

// 5. Tong cac so nguyen chan, le.
void sumEvenOdd(int *arr, int size, int& sumEven, int& sumOdd)
{
    sumEven = 0, sumOdd = 0;

    for (int i = 0; i < size; ++i) {
        if (!(arr[i] % 2))
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
}

// 6. Max, min, vi tri max, min.
void maxMin(int *arr, int size, int& max, int& min, int& indexMax, int& indexMin)
{
    max = arr[0], min = arr[0];
    indexMax = 0, indexMin = 0;

    for (int i = 1; i < size; ++i) {

        if (max < arr[i]) {
            max = arr[i];
            indexMax = i;
        }

        if (min > arr[i]) {
            min = arr[i];
            indexMin = i;
        }
    }
}

// 7. So nguyen duong lon nhat, nho nhat
void maxMinPosInteger(int *arr, int size, int& maxPos, int& minPos)
{
    maxPos = 1, minPos = 2147483647;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {

            if (maxPos < arr[i])
                maxPos = arr[i];
            
            if (minPos > arr[i])
                minPos = arr[i];
        }
    }
}

// 8. So nguyen am lon nhat, nho nhat
void maxMinNegInteger(int *arr, int size, int& maxNeg, int& minNeg)
{
    maxNeg = -2147483648, minNeg = -1;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {

            if (maxNeg < arr[i])
                maxNeg = arr[i];
            
            if (minNeg > arr[i])
                minNeg = arr[i];
        }
    }
}

// 9. Xoa phan tu.
// Xoa dau.
void deleteHead(int *arr, int& size)
{
    --size;
    for (int i = 0; i < size; ++i)
        arr[i] = arr[i+1];
}

// Xoa cuoi.
void deleteTail(int *arr, int& size)
{
    --size;
}

// Xoa tai X index.
void deleteAtX(int *arr, int& size, int index)
{
    if (index == size - 1) {
        --size;
        return;
    }
	
    --size;
    for (int i = index; i < size; ++i)
        arr[i] = arr[i+1];
}

// 10. Chen phan tu.
// Chen dau.
void insertHead(int *arr, int& size, int value)
{
	++size;
	for (int i = size-1; i > 0; --i)
		arr[i] = arr[i-1];
	arr[0] = value;
}

// Chen cuoi.
void insertTail(int *arr, int& size, int value)
{
	arr[size++] = value;
}

// Chen tai X index.
void insertAtX(int *arr, int& size, int value, int index)
{
	++size;
	for (int i = size-1; i > index; --i)
		arr[i] = arr[i-1];
	arr[index] = value;
}

// 11. Dem so am, so duong, so 0
void countIntegerType(int *arr, int size, int& countNeg, int& countPos, int& countZero)
{
    countNeg = 0, countPos = 0, countZero = 0;
    
    for (int i = 0; i < size; ++i) {
	    if (arr[i] < 0) ++countNeg;
	    else if (arr[i] > 0) ++countPos;
	    else ++countZero;
    }
}

// 12. Dem va tinh tong cac so chinh phuong.
// Ham kiem tra so chinh phuong.
bool isPerfectSquare(int value)
{
	return (int)sqrt(value) == sqrt(value);
}

void countSumPerSqr(int *arr, int size, int& count, int& sum)
{
    count = 0, sum = 0;
    
    for (int i = 0; i < size; ++i) {
	    if (isPerfectSquare(arr[i])) {
		    ++count;
		    sum += arr[i];
	    }
    }
}

// 13. Sap xep
// Ham hoan vi
void swap(int& a, int& b)
{
    int c(a); a = b; b = c;
}

// Tang dan.
void ascending(int *arr, int size)
{
    for (int i = 0; i < size-1; ++i)
        for (int j = i+1; j < size; ++j)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}

// Giam dan.
void descending(int *arr, int size)
{
    for (int i = 0; i < size-1; ++i)
        for (int j = i+1; j < size; ++j)
            if (arr[i] < arr[j])
                swap(arr[i], arr[j]);
}

#endif
