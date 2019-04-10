#include <iostream>
#include <cmath>

using namespace std;

unsigned factorial(unsigned n)
{
    return (!n || n == 1) ? 1 : n * factorial(n-1);
}

int main()
{
    int n, x, a, e;

    cout << "Nhap n: "; cin >> n;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap sai so a: "; cin >> a;
    cout << "Nhap sai so e: "; cin >> e;

    double sum = 0;

    if (pow(x, 2*n+1) / factorial(2*n+1) <= a)
        cout << "Sai dieu kien\n";
    else {
        for (int i = 0; i <= n; ++i)
            sum += pow(x, 2*i+1) / factorial(2*i+1);
        
        cout << "S = " << sum << "\n";
    }

    double taylor = 0;
    
    if (pow(x, 2*n+1) / factorial(2*n+1) == e)
        cout << "Sai dieu kien\n";
    else {
        for (int i = 0; i <= n; ++i)
            taylor += pow(-1, i) * (pow(x, 2*i+1) / factorial(2*i+1));
    
        cout << "sin(" << x << ") = " << taylor << "\n";
    }

    return 0;
}