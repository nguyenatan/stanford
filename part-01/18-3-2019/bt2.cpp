#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;

    int max = a, min = a;

    if (max < b)
        max = b;
    if (max < c)
        max = c;
    
    if (min > b)
        min = b;
    if (min > c)
        min = c;

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
