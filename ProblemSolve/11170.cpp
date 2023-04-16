#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int ans = 0;
        for (int i = N; i <= M; i++)
        {
            string t = to_string(i);
            for (int j = 0; j < t.size(); j++)
            {
                if (t[j] == '0')
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}