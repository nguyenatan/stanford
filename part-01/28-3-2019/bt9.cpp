#include <iostream>
#include <algorithm> // sort()
#include <vector>

using namespace std;

int main()
{
    vector<int> v(4);

    for (int i = 0; i < v.size(); ++i) {
        cout << "Nhap so nguyen thu " << i+1 << ": ";
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());

    cout << "Sap xep theo thu tu tang dan:";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;

    cout << "\n";

    return 0;
}