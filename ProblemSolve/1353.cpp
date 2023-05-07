#include <iostream>
#include <cmath>
#define e 2.718281828459045
using namespace std;
int S, P;
long double f(int n)
{
    return pow(1.l * S / n, n);
}
int main()
{
    cin >> S >> P;
    if (S == P)
    {
        cout << 1 << endl;
        return 0;
    }
    if (pow(e, S / e) < P)
    {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 2; i <= 100000000; i++)
    {
        if (f(i) >= P)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}