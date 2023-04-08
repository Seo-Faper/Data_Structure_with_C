#include <iostream>
using namespace std;
int T;
int N, M, x, y;
int gcd(int a, int b)
{
    if (!b)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int solution()
{
    cin >> M >> N >> x >> y;
    int dday = lcm(M, N);
    for (int i = x; i <= dday; i += M)
    {
        int ny = i % N;
        if (ny == 0)
        {
            ny = N;
        }
        if (ny == y)
            return i;
    }
    return -1;
}
int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << solution() << endl;
    }
    return 0;
}