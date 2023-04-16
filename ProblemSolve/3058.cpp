#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int ans = 0xffffff;
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            int a;
            cin >> a;
            if (a < ans && a % 2 == 0)
            {
                ans = a;
            }
            if (a % 2 == 0)
                sum += a;
        }
        cout << sum << " " << ans << endl;
    }
    return 0;
}