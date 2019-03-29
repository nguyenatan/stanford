#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; ++i) {
        cout << "Nhap so nguyen thu " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 4; ++i) {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Max = " << max << "\n";
    cout << "Min = " << min << "\n";

    return 0;
}