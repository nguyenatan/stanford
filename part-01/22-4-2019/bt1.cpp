#include "utility.h"

using namespace std;

int main()
{
    int size;
    cout << "Nhap n: "; cin >> size;

    int *arr = new int[size];

    input(arr, size);

    int *pos = new int[size], lenPos = 0;
    int *neg = new int[size], lenNeg = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            pos[lenPos++] = arr[i];
        else if (arr[i] < 0)
            neg[lenNeg++] = arr[i];
    }

    output(arr, size);
    output(pos, lenPos);
    output(neg, lenNeg);

    delete[] arr;
    delete[] pos;
    delete[] neg;

    return 0;
}