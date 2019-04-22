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

    for (int i = 2; i < sqrt(value); ++i)
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

// 9. Xoa phan tu
void deleteHead(int *arr, int& size)
{
    --size;
    for (int i = 0; i < size; ++i)
        arr[i] = arr[i+1];
}

void deleteTail(int *arr, int& size)
{
    --size;
}

void deleteAtX(int *arr, int& size, int index)
{
    --size;
    for (int i = index; i < size; ++i)
        arr[i] = arr[i+1];
}

#endif