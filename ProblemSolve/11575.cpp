#include <iostream>
using namespace std;
int N;
string k;
int main()
{
    cin >> N;
    int a, b;
    while (N--)
    {
        cin >> a >> b;

        cin >> k;
        string ans = "";
        for (int i = 0; i < k.size(); i++)
        {
            ans += ((a * k[i] - 'A' + b) % 26) + 'A';
        }
        cout << ans << endl;
    }
    return 0;
}