#include <iostream>

using namespace std;

int main()
{
    // a1x + b1y = c1
    // a2x + b2y = c2
    float a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    float delta = a1 * b2 - a2 * b1;
    float dx = c1 * b2 - c2 * b1;
    float dy = a1 * c2 - a2 * c1;
    
    if (!delta) {
        if (c1 == c2)
            cout << "He phuong trinh co vo so nghiem\n";
        else
            cout << "He phuong trinh vo nghiem\n";
    } else {
        float x = dx / delta;
        float y = dy / delta;

        cout << "He phuong trinh co nghiem: x = " << x << "\n";
        cout << "                           y = " << y << "\n";
    }

    return 0;
}