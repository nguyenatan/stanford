#include <iostream>
#include <cmath>

using namespace std;

/*
 * isPrime - Hàm kiểm tra số nguyên tố
 * Nếu là số nguyên tố return true và ngược lại.
 */
bool isPrime(unsigned n)
{
    if (n <= 1)
        return 0;
    
    for (int i = 2; i <= sqrt(n); ++i)
        if (!(n % i))
            return 0;

    return 1;
}

/*
 * isPerfectSquare - Hàm kiểm tra số chính phương
 * Nếu là số chính phương return true và ngược lại.
 */
bool isPerfectSquare(unsigned n)
{
    // (a ? b : c) - Toán tử điều kiện 3 ngôi
    // Nếu a true thì return b
    // Nếu a false thì return c.
    return (int)sqrt(n) == sqrt(n) ? 1 : 0;
}

int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;

    int sum = 0;
    int sumEven = 0, sumOdd = 0;
    int count_235 = 0, sum_235 = 0;
    int countPrime = 0, sumPrime = 0;
    int countPerfectSquare = 0, sumPerfectSquare = 0;

    cout << "Nhap " << n << " so nguyen bat ky: ";

    int value;

    for (int i = 1; i <= n; ++i) {
        cin >> value;

        sum += value;

        if (!(value % 2))
            sumEven += value;
        else
            sumOdd += value;
        
        if (!(value % 2) && !(value % 3) && !(value % 5)) {
            ++count_235;
            sum_235 += value;
        }

        if (isPrime(value)) {
            ++countPrime;
            sumPrime += value;
        }
        
        if (isPerfectSquare(value)) {
            ++countPerfectSquare;
            sumPerfectSquare += value;
        }
    }

    cout << "1. Tong = " << sum << "\n";
    cout << "2. Tong cac so chan = " << sumEven << "\n";
    cout << "   Tong cac so le = " << sumOdd << "\n";
    cout << "3. Co " << count_235 << " so chia het cho 2, 3 va 5\n";
    cout << "   Tong cac so chia het cho 2, 3 va 5 = " << sum_235 << "\n";
    cout << "4. Co " << countPrime << " so nguyen to\n";
    cout << "   Tong cac so nguyen to = " << sumPrime << "\n";
    cout << "5. Co " << countPerfectSquare << " so chinh phuong\n";
    cout << "   Tong cac so chinh phuong = " << sumPerfectSquare << "\n";

    return 0;
}