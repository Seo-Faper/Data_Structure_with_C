#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define P pair<int, string>
using namespace std;
int N;
int value[10];
int main()
{
    cin >> N;
    vector<P> v;
    for (int i = 0; i < N; i++)
    {
        string k;
        cin >> k;
        v.push_back(make_pair(k.size(), k));
    }
    sort(v.begin(), v.end());
    for (int i = N - 1; i >= 0; i--)
    {
        string s = v[i].second;
        for (int j = 0; j < s.size(); j++)
        {
            if (value[s[j] - 'A'] == 0)
            {
                        }
        }
    }
    return 0;
}