#include <iostream>
#include <cmath> // M_PI, pow()

using namespace std;

int main()
{
    double C, S;

    // Hinh vuong
    double canh;
    cout << "Do dai canh? "; cin >> canh;
    
    C = canh * 4;
    S = canh * canh;
    cout << "Hinh vuong: C = " << C << endl;
    cout << "            S = " << S << endl;

    // Hinh chu nhat
    double chieuDai, chieuRong;
    cout << "Chieu dai? "; cin >> chieuDai;
    cout << "Chieu rong? "; cin >> chieuRong;

    C = (chieuDai + chieuRong) * 2;
    S = chieuDai * chieuRong;
    cout << "Hinh chu nhat: C = " << C << endl;
    cout << "               S = " << S << endl;

    // Hinh tron
    double banKinh;
    cout << "Ban kinh? "; cin >> banKinh;

    C = 2 * M_PI * banKinh;
    S = pow(banKinh, 2) * M_PI;
    cout << "Hinh tron: C = " << C << endl;
    cout << "           S = " << S << endl;

    return 0;
}
