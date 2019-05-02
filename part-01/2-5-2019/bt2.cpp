#include <iostream>
#include <string>

using namespace std;

void showBits(int value)
{
	string s;
	
	cout << "Decimal = " << value << "\n";
	
	while (value) {
		
		if (!(value % 2))
			s.insert(s.begin(), '0');
		else
			s.insert(s.begin(), '1');
		
		value >>= 1;
	}
	
	cout << "Binary  = " << s << "\n";
}

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	
	showBits(n);
	
	return 0;
}
