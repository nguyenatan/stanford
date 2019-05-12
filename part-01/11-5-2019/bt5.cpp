#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
	return ( year & 25 && !(year & 3) || !(year & 15) );
}

int main()
{
	int a, b;
	cout << "Nhap nam a: "; cin >> a;
	cout << "Nhap nam b: "; cin >> b;
	
	cout << "Nam nhuan tu nam " << a << " den nam " << b << ":";
	
	for (int i = a; i <= b; ++i)
		if (isLeapYear(i))
			cout << ' ' << i;
	
	cout << '\n';
	
	return 0;
}
