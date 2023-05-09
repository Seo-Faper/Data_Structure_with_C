#include <iostream>
using namespace std;
int arr[101][101];
int main()
{
    int ans = 0;
    for (int k = 0; k < 4; k++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i < c; i++)
        {
            for (int j = b; j < d; j++)
            {
                if (!arr[i][j])
                {
                    arr[i][j] = 1;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}