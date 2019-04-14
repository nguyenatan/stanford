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

int main()
{
	int n;
	do {
		cout << "Nhap n (n > 0): ";
		cin >> n;
	} while (n <= 0);
	
	return 0;
}
