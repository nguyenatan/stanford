#include <iostream>
#include <cctype> // isdigit

using namespace std;

bool isPosIntegerFormat(string s)
{
    if (s[0] == '-') return 0;

    for (int i = 0, size = s.size(); i < size; ++i) {
        
        if (s[0] == '+')
            continue;
            
        if (!isdigit(s[i]))
            return 0;
    }
        
    return 1;
}

int main()
{
    string s;
    getline(cin, s);

    if (isPosIntegerFormat(s))
        cout << s << " la chuoi so nguyen duong\n";
    else
        cout << s << " khong phai la chuoi so nguyen duong\n";

    return 0;
}
