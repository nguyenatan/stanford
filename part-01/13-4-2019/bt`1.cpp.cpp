#include <iostream>
#include <cmath>

using namespace std;

double s1(int n)
{
	double result(0);
	
	while (n-- > 0)
		result = sqrt(result + 2);
	
	return result;
}

int main()
{
	int n;
	do {
		cout << "Nhap n (n > 0): ";
		cin >> n;
	} while (n <= 0);
	
	cout << s1(n) << "\n";
	
	return 0;
}
