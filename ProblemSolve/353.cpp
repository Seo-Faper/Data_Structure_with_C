#include <iostream>
#include <cmath>
#define e 2.718281828459045
using namespace std;
int S, P;
double f(int n)
{
    return pow(n, S / n);
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

    return 0;
}