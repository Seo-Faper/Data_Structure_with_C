#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int max_k = (k >= 30) ? (1 << 30) : (1 << k);
        int ans = 0;
        if (max_k <= n)
        {
            ans = max_k;
        }
        else
        {
            ans = n + 1;
        }

        cout << ans << "\n";
    }
    return 0;
}
