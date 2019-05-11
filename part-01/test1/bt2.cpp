#include <iostream>
#include <cstring> // strtok
#include <cstdio> // gets
#include <cstdlib> // atoi

using namespace std;

int main()
{
        char s[100];
        gets(s);

        char *token = strtok(s, "/");
        int sum = 0;

        while (token) {
                sum += atoi(token);
                token = strtok(NULL, "/");
        }
    
        cout << "Tong = " << sum << '\n';

        return 0;
}
