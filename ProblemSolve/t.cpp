#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned short value = 0xffff;
    unsigned short mask1 = 0x00ff;
    unsigned char mask2 = 0x77;
    unsigned char mask3 = 65;
    unsigned char mask4 = 18;

    cout << !mask4 << endl;
    cout << mask3 << endl;

    cout << "[출력 1]: " << value << endl;
    cout << "[출력 2]: " << mask1 << endl;
    cout << "[출력 3]: " << (int)mask2 << endl;
    cout << "[출력 4]: " << (unsigned int)mask3 << endl;
    cout << "[출력 5]: " << (unsigned int)mask4 << endl;

    cout << "[출력 - 1]: " << (value & mask1) << endl;
    cout << "[출력 - 2]: " << (value & mask2) << endl;
    cout << "[출력 - 3]: " << (mask3 & mask4) << endl;
    cout << "[출력 - 4]: " << (mask3 | mask4) << endl;
    cout << "[출력 - 5]: " << (mask3 ^ mask4) << endl;
    cout << "[출력 - 6]: " << (mask3 | !mask4) << endl;

    return 0;
}