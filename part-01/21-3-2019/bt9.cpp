#include <iostream>

using namespace std;

int main()
{
    int d;
    
    do {
        cout << "Nhap so nguyen (0-9): ";
        cin >> d;
    } while (d < 0 || d > 9);

    switch(d) {
        case 0:
            cout << "khong\n"; break;
        case 1:
            cout << "mot\n"; break;
        case 2:
            cout << "hai\n"; break;
        case 3:
            cout << "ba\n"; break;
        case 4:
            cout << "bon\n"; break;
        case 5:
            cout << "nam\n"; break;
        case 6:
            cout << "sau\n"; break;
        case 7:
            cout << "bay\n"; break;
        case 8:
            cout << "tam\n"; break;
        case 9:
            cout << "chin\n"; break;
    }

    return 0;
}