#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int e = 0;
    while (n--)
    {

        int ans = 0;
        int dice[6] = {0, 0, 0, 0, 0, 0};
        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;
            a--;
            dice[a]++;
        }
        for (int i = 5; i >= 0; i--)
        {
            if (dice[i] == 4)
            {
                ans = 50000 + 5000 * (dice[i] + 1);
                break;
            }
            else if (dice[i] == 3)
            {
                ans = 10000 + 1000 * (dice[i] + 1);
                break;
            }
            else if (dice[i] == 2)
            {
                for (int j = i + 1; j < 6; j++)
                {
                    if (dice[i] == 2)
                    {
                        ans = 2000 + (dice[i] + 1) * 500 + (dice[j] + 1) * 500;
                        break;
                    }
                    else
                    {
                        ans = 1000 + (dice[i] + 1) * 100;
                        break;
                    }
                }
            }
            else
            {
                ans = 100 * (dice[i] + 1);
                break;
            }
        }
        cout << ans << endl;
        e = max(ans, e);
    }
    cout << e << endl;
    return 0;
}