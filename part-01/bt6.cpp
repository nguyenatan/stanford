#include <iostream>
#include <iomanip> // std::setprecision()
#include <cmath> // sqrt()

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    float a = sqrt(3 + sqrt(3 + sqrt(3)));
    cout << "Ket qua cau a: " << a << endl;

    float b = 1 / (2 + 1 / (2 + 1.0/2));
    cout << "Ket qua cau b: " << b << endl;

    return 0;
}