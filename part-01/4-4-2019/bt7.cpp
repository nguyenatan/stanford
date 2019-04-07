#include <iostream>
#include <cmath>

using namespace std;

// Ham kiem tra so chinh phuong
bool isPerfectSquare(int n)
{
    return (int)sqrt(n) == sqrt(n);
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int sum = 0, count = 0;

    for (int i = 1; i <= n; ++i)
        if (isPerfectSquare(i)) {
            sum += i;
            ++count;
        }
    
    cout << "Co " << count << " so chinh phuong tu 1 toi " << n << "\n";
    cout << "Tong cac so chinh phuong = " << sum << "\n";

    return 0;
}