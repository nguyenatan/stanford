#include <iostream>

using namespace std;

unsigned doubleFactorial(unsigned n)
{
    return (n == 0 || n == 1) ? 1 : n * doubleFactorial(n-2);
}

int main()
{
    unsigned n;
    cout << "Nhap n: "; cin >> n;

    cout << n << "!! = " << doubleFactorial(n) << "\n";

    return 0;
}