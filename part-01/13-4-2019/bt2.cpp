#include <iostream>

using namespace std;

bool allOdd(int n)
{
	while (n) {
		int rem = n % 10;

		if (!(rem % 2)) return false;

		n /= 10;
	}

	return true;
}

bool allEven(int n)
{
	while (n) {
		int rem = n % 10;

		if (rem % 2) return false;

		n /= 10;
	}

	return true;
}


bool isDoiXung(int n)
{
	char s[100];
	int size = sprintf(s, "%d", n);

	for (int i = 0; i < size; ++i)
		if (s[i] != s[size-i-1]) return false;

	return true;
}

bool isTangDan(int n)
{
	while (n >= 10) {
		int rem = n % 10;

		n /= 10;

		if (rem <= n % 10)
			return false;
	}

	return true;
}

int main()
{
	int n;
	do {
		cout << "Nhap n (n > 0): ";
		cin >> n;
	} while (n <= 0);

	if (allOdd(n))
		cout << n << " co toan chu so le\n";
	if (allEven(n))
		cout << n << " co toan chu so chan\n";
	if (isDoiXung(n))
		cout << n << " la so doi xung\n";
	if (isTangDan(n))
		cout << n << " tang dan ->\n";

	return 0;
}
