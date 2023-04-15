#include <iostream>
#include <string>
using namespace std;
int T, N;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N;
        int m = 0;
        string ans = "";
        while (N--)
        {
            string k;
            int l;
            cin >> l >> k;
            if (l >= m)
            {
                m = l;
                ans = k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}