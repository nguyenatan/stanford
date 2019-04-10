#include <iostream>

using namespace std;

int main()
{
	cout << "1.\n\n";
	
	for (int i = 1; i <= 5; ++i) {
		string a(i, '*');
		string s(5-i, ' ');
		cout << a << s << "\n";
	}
	
	cout << "\n2.\n\n";
	
	for (int i = 5; i >= 1; --i) {
		string a(i, '*');
		string s(5-i, ' ');
		cout << a << s << "\n";
	}
	
	cout << "\n3.\n\n";
	
	for (int i = 1; i <= 5; ++i) {
		string s(5-i, ' ');
		string a(i, '*');
		cout << s << a << "\n";
	}
	
	
	return 0;
}
