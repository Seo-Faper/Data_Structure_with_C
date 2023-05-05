#include <iostream>
#include <algorithm>
using namespace std;
int T;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}
int main()
{
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " ";
        cout << gcd(a, b) << "\n";
    }
    return 0;
}