#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    for (int i = 0; i < 3; i++)
    {
        string a;
        cin >> a;
        int ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            int e = 1;
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[i] == a[j])
                {
                    e++;
                }
                else
                {
                    break;
                }
            }
            ans = max(e, ans);
        }
        cout << ans << endl;
    }
    return 0;
}