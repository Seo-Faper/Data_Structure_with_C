#include <iostream>
#include <cstring>
using namespace std;
int d[26];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        memset(d, 0, sizeof(d));
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            d[s[i] - 'A']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (!d[i])
            {
                ans += 'A' + i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}