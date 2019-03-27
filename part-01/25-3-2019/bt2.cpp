#include <iostream>

using namespace std;

int main()
{
    for (char c = 'a'; c <= 'z'; ++c)
        cout << c << (c != 'z' ? ", " : "\n");

    return 0;
}