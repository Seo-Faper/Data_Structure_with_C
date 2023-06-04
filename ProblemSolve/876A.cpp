#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double n, k;
        cin >> n >> k;
        int ans = 2 * ceil((n / 2) / k);
        if ((int)n % 2 != 0)
        {
            if (n / 2 > k)
                ans--;
            else if (n / 2 == k)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
