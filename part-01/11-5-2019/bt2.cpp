#include <iostream>
#include <cmath> // sqrt

using namespace std;

bool isPerfectSquare(int value)
{
	return (int)sqrt(value) == sqrt(value);
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "So chinh phuong tu 1 den " << n << ":";
	for (int i = 1; i <= n; ++i)
		if (isPerfectSquare(i))
			cout << ' ' << i;
	
	cout << '\n';
	
	return 0;
}
