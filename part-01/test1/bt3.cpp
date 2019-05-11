#include <iostream>
#include <sstream>
#include <iomanip> // setfill, setw

using namespace std;

#define CHAR_BIT 8

string dec_to_bin(int value)
{
        stringstream ss;
        int i = sizeof(int) * CHAR_BIT - 1;

        for (; i >= 0; --i) {

                if ( i != 31 && !((i + 1) & 3) )
                        ss << " ";
        
                ss << (value & (1u << i) ? "1" : "0");
        }

        return ss.str();
}

string dec_to_hex(int value)
{
	stringstream ss;

	ss << "0x"
	   << setfill('0') << setw(sizeof(int) * 2)
	   << hex << value;
	   
	return ss.str();
}

int main()
{
        int n;
        do {
                cout << "Nhap n (n > 0): ";
                cin >> n;
        } while (n <= 0);

        cout << "Dec = " << n << '\n';
        cout << "Hex = " << dec_to_hex(n) << '\n';
        cout << "Bin = " << dec_to_bin(n) << '\n';
	
	return 0;
}
