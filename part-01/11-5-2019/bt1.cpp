#include <iostream>

using namespace std;

int factorial(int value)
{
	return !value ? 1 : value * factorial(value - 1);
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
		cout << i << "! = " << factorial(i) << '\n';
	
	return 0;
}
