#include <iostream>
#include <string>
using namespace std;
int main()
{
    string k;
    cin >> k;
    int ans = 10;
    char t = k[0];
    for (int i = 1; i < k.size(); i++)
    {
        if (k[i] != t)
        {
            ans += 10;
            t = k[i];
        }
        else
        {
            ans += 5;
        }
    }
    cout << ans << endl;
    return 0;
}