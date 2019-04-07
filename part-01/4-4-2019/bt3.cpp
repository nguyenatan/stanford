#include <iostream>

using namespace std;

int main()
{
    int n;
    int max = 0, min = 2147483647;
    double sum = 0;
    int count = 0;

    do {
        cout << "Nhap so nguyen duong (0 - exit): ";
        cin >> n;

        if (n > 0) {
            if (max < n)
                max = n;
        
            if (min > n)
                min = n;

            sum += n;
            ++count;
        }
    } while (n != 0);

    cout << "Max = " << max << "\n";
    cout << "Min = " << min << "\n";
    cout << "Trung binh cong = " << sum / count << "\n";

    return 0;
}
