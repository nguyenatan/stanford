#include <iostream>
#include <cctype> // isdigit
#include <cstdlib> // atoi

using namespace std;

bool isIntegerFormat(const char *s)
{
	while (*s) {
		
		if (!isdigit(*s))
			return false;
			
		++s;
	}
	
	return true;
}

int main()
{
	char s[100];
	gets(s);
	
	if (isIntegerFormat(s)) {
		
		int i = atoi(s); // Chuyen tu chuoi thanh so nguyen.
		
		if(sizeof(i) == 4)
			cout << i << " la dinh dang so nguyen\n";
		
	} else
		cout << s << " khong phai la dinh dang so nguyen\n";
	
	return 0;
}
