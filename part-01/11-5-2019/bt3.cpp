#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b); 
}

int main()
{
	int a, b, c, d;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	cout << "Nhap d: "; cin >> d;
	
	cout << "UCLN cua " << a << ", "
			    << b << ", "
			    << c << ", "
			    << d << " = ";
	cout << gcd(gcd(a, b), gcd(c, d));
	
	return 0;
}
