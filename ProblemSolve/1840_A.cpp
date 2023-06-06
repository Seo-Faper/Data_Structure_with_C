#include <iostream>
#include <string>
using namespace std;
int N;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N;
        string k;
        cin >> k;
        string ans = "";
        char init = k[0];
        for (int i = 1; i < N; i++)
        {

            if (k[i] == init && i < N - 2)
            {
                ans += k[i + 1];
                init = k[i + 1];
                i++;
            }
        }
        cout << k[0] + ans << endl;
    }
}