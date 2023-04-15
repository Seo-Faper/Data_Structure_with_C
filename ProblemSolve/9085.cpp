#include <iostream>
using namespace std;
int T, N;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N;
        int ans = 0;
        while (N--)
        {
            int a;
            cin >> a;
            ans += a;
        }
        cout << ans << endl;
    }
    return 0;
}