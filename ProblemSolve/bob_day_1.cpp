#include <iostream>
using namespace std;
int main()
{
    unsigned int x = 0xffffffff;
    unsigned short y = x;
    int z = x;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}