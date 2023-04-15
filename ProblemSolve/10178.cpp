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
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", a / b, a % b);
    }
    return 0;
}