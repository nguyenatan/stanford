#include <iostream>
#include <sstream>
#include <iomanip> // setfill, setw

using namespace std;

template<typename T>
string dec_to_bin(T value)
{
	string binary = "";

    while (value) {
        binary = (!(value & 1) ? '0' : '1') + binary;
        value /= 2;
    }

    return binary;
}

template<typename T>
string dec_to_hex(T value)
{
	stringstream ss;

	ss << "0x"
	   << setfill('0') << setw(sizeof(T) * 2)
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
