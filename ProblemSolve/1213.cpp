#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <string>
using namespace std;
int q[26];
int main()
{
    string k;
    cin >> k;
    vector<char> v;
    for (int i = 0; i < k.size(); i++)
    {
        v.push_back(k[i]);
    }

    for (int i = 0; i < k.size(); i++)
    {
        q[v[i] - 'A']++;
    }

    int center = 0;
    int center_index = -1;
    bool c = false;
    for (int i = 0; i < 26; i++)
    {
        if (q[i] % 2 != 0)
        {
            center++;
            center_index = i;
        }
    }
    if (center > 1)
    {
        cout << "I'm Sorry Hansoo"
             << "\n";
        return 0;
    }
    if (center_index != -1)
    {
        q[center_index]--;
        c = true;
    }
    for (int i = 0; i < 26; i++)
    {

        for (int j = 0; j < q[i] / 2; j++)
        {
            cout << (char)('A' + i);
        }
    }
    if (c)
        cout << (char)('A' + center_index);
    for (int i = 25; i >= 0; i--)
    {

        for (int j = 0; j < q[i] / 2; j++)
        {
            cout << (char)('A' + i);
        }
    }
    cout << "\n";
    return 0;
}