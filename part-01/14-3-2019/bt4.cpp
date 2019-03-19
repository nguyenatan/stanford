#include <iostream>

using namespace std;

int main()
{
    char c1 = 200; unsigned char c2 = 200;
    cout << "c1 = " << c1 << ", c2 = " << c2 << "\n";
    cout << "c1 + 100 = " << c1 + 100 << ", c2 + 100 = " << c2 + 100 << endl;

    /*
        Chương trình chạy:      c1 = �,         c2 = �
                                c1 + 100 = 44,  c2 + 100 = 300
        
        // char c1 có size là 8 bits, là kiểu có dấu nên miền giá trị từ -128 ... 127
        // unsigned char c2 là kiểu không dấu có miền giá trị từ 0 ... 255.

        // c1 = 200, 200 mã nhị phân là 1100 1000
        // giá trị 200 nằm ngoài -128 ... 127 nên sẽ lấy số âm theo mã nhị phân 1100 1000 là -56 (-56 là two's complement của 56).

        // c1 + 100 = 44 và c2 + 100 = 300
        // khi có kiểu dữ liệu khác nhau cùng trong 1 biểu thức thì tự động chuyển về 1 kiểu dữ liệu có độ ưu tiên cao hơn
        // 100 là kiểu int (4 bytes), có độ ưu tiên hơn kiểu char (1 byte) nên trả về giá trị int (int có miền giá trị -2147483648 ... 2147483647).
    */

    return 0;
}
