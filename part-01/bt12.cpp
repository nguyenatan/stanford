#include <iostream>
#include <cmath> // M_PI, pow()
#include <iomanip> // std::setprecision()

using namespace std;

int main()
{
    double banKinh;
    cout << "Ban kinh? "; cin >> banKinh;

    cout << fixed << setprecision(3);

    double S = 4 * M_PI * pow(banKinh, 2);
    cout << "Dien tich hinh cau = " << S << endl;

    double V = banKinh * S / 3;
    cout << "The tich hinh cau = " << V << endl;

    return 0;
}