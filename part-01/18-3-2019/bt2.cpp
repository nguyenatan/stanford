#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;

    int max = 0, min = 0;

    if (a >= b && a >= c) {
        max = a;
        if (b > c)
            min = c;
        else
            min = b;
    }

    if (b >= a && b >= c) {
        max = b;
        if (a > c)
            min = c;
        else
            min = a;
    }

    if (c >= a && c >= b) {
        max = c;
        if (a > b)
            min = b;
        else
            min = a;
    }

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
