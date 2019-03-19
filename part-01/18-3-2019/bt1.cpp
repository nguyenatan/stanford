#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Nhap tuoi cua hoc sinh: ";
    cin >> age;

    if (9 <= age && age <= 12)
        cout << "Hop le\n";
    else
        cout << "Khong hop le\n";

    return 0;
}