#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        for (int j = 0; j < k.size(); j++)
        {
            if (k.find(s) != string::npos)
            {
                ans++;
                break;
            }
            else
            {
                k = k.substr(1, k.size()) + k[0];
            }
        }
    }
    cout << ans << endl;
    return 0;
}