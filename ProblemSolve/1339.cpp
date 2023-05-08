#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
int N;
int value[10];

int main()
{
    cin >> N;
    vector<string> s;
    for (int i = 0; i < N; i++)
    {
        string k;
        string p = "";
        cin >> k;
        for (int j = 0; j < 10 - k.size(); j++)
        {
            p += " ";
        }
        s.push_back(p + k);
    }
    sort(s.begin(), s.end(), greater<string>());
    int ans = 0;
    int ctr = 9;
    for (int j = 0; j < 10; j++)
    {
        int num = 0;
        for (int i = 0; i < N; i++)
        {
            if (s[i][j] != ' ' && value[s[i][j] - 'A'] == 0)
            {
                value[s[i][j] - 'A'] = ctr;
                ctr--;
            }
            //  cout << "!" << s[i][j] << endl;
            cout << pow(10, 9 - j) * value[s[i][j] - 'A'] << endl;
            num += pow(10, 9 - j) * value[s[i][j] - 'A'];
        }
        ans += num;
    }
    cout << ans << endl;
    return 0;
}