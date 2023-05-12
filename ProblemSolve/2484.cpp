#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int e = 0;
    while (n--)
    {
        int dice[7] = {0, 0, 0, 0, 0, 0, 0};
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;
            dice[a]++;
        }
        int one = 0;
        int two = 0;
        for (int i = 6; i > 0; i--)
        {
            if (dice[i] == 4)
            {
                ans = 50000 + (i)*5000;
                break;
            }
            else if (dice[i] == 3)
            {
                ans = 10000 + (i)*1000;
                break;
            }
            if (dice[i] == 1)
            {
                one++;
            }
            else if (dice[i] == 2)
            {
                two++;
            }
        }
        if (one == 4)
        {
            for (int i = 6; i > 0; i--)
            {
                if (dice[i])
                {
                    ans = i * 100;
                    break;
                }
            }
        }
        else if (two == 2)
        {
            for (int i = 6; i > 0; i--)
            {
                // cout << dice[i] << " ";
                if (dice[i] == 2)
                {
                    ans += i * 500;
                }
            }
            ans += 2000;
        }
        else if (two == 1 && one == 2)
        {
            for (int i = 6; i > 0; i--)
            {

                if (dice[i] == 2)
                {
                    ans = 1000 + i * 100;
                    break;
                }
            }
        }
        cout << "\n"
             << ans << endl;
        e = max(e, ans);
    }
    cout << e << endl;
    return 0;
}