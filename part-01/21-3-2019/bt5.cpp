#include <iostream>

using namespace std;

int main()
{
    short d;
    cin >> d;

    if (d > 0)
        cout << hex << "Hex: " << d << "\n";
    else
        cout << oct << "Oct: " << d << "\n";

    return 0;
}