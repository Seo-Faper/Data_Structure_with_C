#include <iostream>
using namespace std;
int T, N;
int main()
{
    cin >> T;
    while (T--)
    {
        int ans = 0;
        cin >> ans;
        cin >> N;

        while (N--)
        {
            int a, b;
            cin >> a >> b;
            ans += a * b;
        }
        cout << ans << endl;
        }
    return 0;
}