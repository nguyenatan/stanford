#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Nhap so tu nhien: "; cin >> number;

    int result = number * number;
    cout << number << "^2 = " << result << endl;
    cout << number << "^3 = " << result * number << endl;
    cout << number << "^4 = " << result * result << endl;

    int up;
    cout << "Nhap so mu: "; cin >> up;

    result = number;
    for (int i = up; i > 1; --i)
        result *= number;

    cout << number << "^" << up << " = " << result << endl;

    return 0;
}