#include <iostream>
#include <vector>
using namespace std;

int t;
int n;
int v[10001][10001];
int main()
{
    cin >> t;
    while (t--)
    {

        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    v[i][abs(a[i] - a[j])]++;
                }
            }
        }
        int ans = -1;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }

            cout << "\n";
        }
        for (int i = 0; i < n; i++)
        {
            bool isRowValid = true;
            for (int j = 0; j < n; j++)
            {
                if (v[j][i])
                {
                    isRowValid = false;
                    break;
                }
            }
            if (isRowValid)
            {
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}