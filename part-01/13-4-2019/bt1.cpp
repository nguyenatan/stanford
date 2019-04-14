#include <iostream>
#include <cmath>

using namespace std;

// Bieu thuc 1
double s1(int n)
{
	double result = 0;
	
	while (n--)
		result = sqrt(2 + result);
	
	return result;
}

// Bieu thuc 2
double s2(int n)
{
	double result = 1;
	
	for (int i = 2; i <= n; ++i)
		result = sqrt(i + result);
	
	return result;
}

// Bieu thuc 3
double s3(int n)
{
	double result = sqrt(n);
	
	while (n-- > 1)
		result = sqrt(n + result);
	
	return result;
}

// Ham tinh nang cho bieu thuc 4
int factorial(int n)
{
	return !n ? 1 : n * factorial(n - 1);
}

// Bieu thuc 4
double s4(int n)
{
	double result(1);
	
	for (int i = 2; i <= n; ++i)
		result = sqrt(factorial(i) + result);
		
	return result;
}

// Bieu thuc 5
double s5(int n)
{
	if (n == 1) return 0;
	
	double result = sqrt(2);
	
	for (int i = 3; i <= n; ++i)
		result = pow(i + result, 1.0 / i);
		
	return result;
}

int main()
{
	int n;
	do {
		cout << "Nhap n (n > 0): ";
		cin >> n;
	} while (n <= 0);

	cout << "S1(" << n << ") = " << s1(n) << "\n";
	cout << "S2(" << n << ") = " << s2(n) << "\n";
	cout << "S3(" << n << ") = " << s3(n) << "\n";
	cout << "S4(" << n << ") = " << s4(n) << "\n";
	cout << "S5(" << n << ") = " << s5(n) << "\n";
	
	return 0;
}
