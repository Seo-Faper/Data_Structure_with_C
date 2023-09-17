#include <iostream>

using namespace std;
long long N;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    return a * (b / gcd(a, b));
}
int main()
{
    cin >> N;
    while (N--)
    {
        long long a, b;
        cin >> a >> b;
        // cout << a << " " << b << endl;
        cout << lcm(a, b) << endl;
    }
    return 0;
}