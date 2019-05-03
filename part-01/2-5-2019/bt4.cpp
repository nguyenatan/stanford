#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // 1. Dem xem chuoi co bao nhieu tu.
    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word) ++count;

    cout << "1. Chuoi co " << count << " tu.\n";

    // 2. Tim tu dai nhat trong chuoi.
    size_t maxSize = 0;
    word = "";
    string longestWords = "";

    for (int i = 0, size = s.size(); i < size; ++i) {

        if (s[i] != ' ')
            word += s[i];
        else
            word = "";
        
        if (maxSize < word.size()) {
            maxSize = word.size();
            longestWords = word;

        } else if (maxSize == word.size()) {
            longestWords += "; ";
            longestWords += word;
        }
    }

    cout << "2. Tu dai nhat trong chuoi: " << longestWords << "\n";

    return 0;
}