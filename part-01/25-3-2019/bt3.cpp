#include <iostream>
#include <cctype> // isalpha()

using namespace std;

int main()
{
    for (char c = 'A'; c <= 'z'; ++c)
        if (isalpha(c))
            cout << c << ((c != 'Z' && c != 'z') ? ", " : ".\n");

    return 0;
}