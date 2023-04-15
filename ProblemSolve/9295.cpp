#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int i = 1;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        printf("Case %d: %d\n", i, a + b);
        i++;
    }
    return 0;
}