#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        printf("You get %d piece(s) and your dad gets 1 piece(%d).\n", a / b, a % b);
    }
    return 0;
}