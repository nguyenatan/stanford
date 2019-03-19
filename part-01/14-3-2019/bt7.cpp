#include <iostream>
#include <iomanip> // std::setprecision()
#include <cmath> // pow(), sqrt()

using namespace std;

int main()
{
    float a, b, c;
    cout << "a? "; cin >> a;
    cout << "b? "; cin >> b;
    cout << "c? "; cin >> c;

    cout << fixed << setprecision(3);

    // Cau a.
    if (c == 0)
        cout << "a. a^2 - 2b + ab/c khong co ket qua\n\n";
    else {
        float ketQua_a = pow(a, 2) - 2*b + a*b/c;
        cout << "a. a^2 - 2b + ab/c = " << ketQua_a << "\n\n";
    }

    // Cau b.
    if (a == 0)
        cout << "b. (b^2 - 4ac) / 2a khong co ket qua\n\n";
    else {
        float ketQua_b = (pow(b, 2) - 4*a*c) / 2*a;
        cout << "b. (b^2 - 4ac) / 2a = " << ketQua_b << "\n\n";
    }

    // Cau c.
    if (c < 0)
        cout << "c. 3a - b^3 - 2√c khong co ket qua\n\n";
    else {
        float ketQua_c = 3*a - pow(b, 3) - 2*sqrt(c);
        cout << "c. 3a - b^3 - 2√c = " << ketQua_c << "\n\n";
    }

    // Cau d.
    float ketQua_d = pow(a, 2) / b - 4*a / b*c + 1;

    if (b == 0 || c == 0 || ketQua_d < 0)
        cout << "d. √(a^2 / b - 4a / bc + 1) khong co ket qua\n";
    else
        cout << "d. √(a^2 / b - 4a / bc + 1) = " << sqrt(ketQua_d) << endl;

    return 0;
}
