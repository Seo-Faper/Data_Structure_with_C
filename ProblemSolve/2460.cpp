#include <iostream>
using namespace std;
int main()
{

    int curr = 0;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        int a, b;
        cin >> a >> b;
        curr -= a;
        curr += b;
        if (curr > ans)
        {
            ans = curr;
        }
    }
    cout << ans << endl;
    return 0;
}