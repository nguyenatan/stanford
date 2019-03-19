#include <iostream>
#include <iomanip> // std::setprecision()

using namespace std;

int main()
{
    float a, b, c;
    cout << "a? "; cin >> a;
    cout << "b? "; cin >> b;
    cout << "c? "; cin >> c;

    cout << fixed << setprecision(2);

    if (b < 0 && c < 0)
        cout << a << "x^2 - " << -b << "x - " << -c << " = 0\n";
    else if (b < 0)
        cout << a << "x^2 - " << -b << "x + " << c << " = 0\n";
    else if (c < 0)
        cout << a << "x^2 + " << b << "x - " << -c << " = 0\n";
    else
        cout << a << "x^2 + " << b << "x + " << c << " = 0\n";

    return 0;
}
