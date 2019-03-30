#include <iostream>
#include <cmath>

using namespace std;

bool isTamGiac(double a, double b, double c)
{
    if (a + b <= c || b + c <= a || c + a <= b)
        return 0;
    return 1;
}

bool isTamGiacVuong(double a, double b, double c)
{
    if (pow(a, 2) == pow(b, 2) + pow(c, 2) ||
        pow(b, 2) == pow(c, 2) + pow(a, 2) ||
        pow(c, 2) == pow(a, 2) + pow(b, 2))
        return 1;
    return 0;
}

bool isTamGiacCan(double a, double b, double c)
{
    if (a == b || b == c || c == a)
        return 1;
    return 0;
}

bool isTamGiacDeu(double a, double b, double c)
{
    if (a == b && b == c)
        return 1;
    return 0;
}

double tinhSTamGiac(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    double a, b, c;
    cout << "Nhap 3 canh cua tam giac: ";
    cin >> a >> b >> c;

    double S = 0;

    if (isTamGiac(a, b, c)) {
        if (isTamGiacVuong(a, b, c))
            cout << "3 canh vua nhap tao thanh tam giac vuong\n";
        else if (isTamGiacDeu(a, b, c))
            cout << "3 canh vua nhap tao thanh tam giac deu\n";
        else if (isTamGiacCan(a, b, c))
            cout << "3 canh vua nhap tao thanh tam giac can\n";
        else
            cout << "3 canh vua nhap tao thanh tam giac thuong\n";
        
        S = tinhSTamGiac(a, b, c);
        cout << "Dien tich = " << S << "\n";
    } else
        cout << "3 canh vua nhap khong tao thanh tam giac\n";
    

    return 0;
}
