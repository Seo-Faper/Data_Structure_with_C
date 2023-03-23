#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int r1, c1, r2, c2, R;
int findPos(int x, int y)
{
    int t = max(abs(x), abs(y));
    int n = (2 * t + 1);
    n *= n;

    int c = 2 * t;
    if (x == t)
        return n - (t - y);
    n -= c;
    if (y == -t)
        return n - (t - x);
    n -= c;
    if (x == -t)
        return n - (y + t);
    n -= c;
    return n - (x + t);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r1 >> c1 >> r2 >> c2;
    int R = 0;
    for (int i = r1; i <= r2; i++)
    {
        for (int j = c1; j <= c2; j++)
        {
            R = max(R, findPos(i, j));
        }
    }
    int k = 0;
    while (R > 0)
    {
        R /= 10;
        k++;
    }
    //  cout << k << endl;
    for (int i = r1; i <= r2; ++i)
    {
        for (int j = c1; j <= c2; ++j)
        {
            cout << setw(k) << findPos(i, j) << " ";
        }
        cout << "\n";
    }

    return 0;
}