#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define P pair<char, int>

using namespace std;
int N;
int value[26];

int main()
{
    cin >> N;
    map<char, int> value;
    map<char, int>::iterator p;
    vector<int> ans;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            value[s[j]] += pow(10, s.size() - j - 1);
        }
    }

    for (p = value.begin(); p != value.end(); ++p)
    {
        ans.push_back(p->second);
    }
    sort(ans.begin(), ans.end(), greater<int>());
    int ctr = 9;
    int result = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        result += ans[i] * ctr;
        ctr--;
    }
    cout << result << endl;
    return 0;
}