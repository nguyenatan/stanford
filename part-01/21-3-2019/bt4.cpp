#include <iostream>
#include <cmath> // log10()

using namespace std;

int main()
{
    int d;
    cin >> d;

    if ((int)log10(d) == 0)
        cout << "La so nguyen duong co 1 chu so\n";
    else if ((int)log10(d) == 1)
        cout << "La so nguyen duong co 2 chu so\n";
    else if (d < 0)
        cout << "Day la so am\n";
    else
        cout << "Khong hop le\n";

    return 0;
}