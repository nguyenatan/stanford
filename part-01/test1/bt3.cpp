#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template<typename T>
string dec_to_hex(T value)
{
	stringstream ss;
	ss << "0x"
	   << setfill('0') << setw(sizeof(T) * 2)
	   << hex << value;
	   
	return ss.str();
}

template<typename T>
string dec_to_bin(T value)
{
	
}
int main()
{
	
	
	return 0;
}
