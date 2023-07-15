#include <iostream>
#include <vector>
#include <set>
using namespace std;
int N;
vector<string> v;

int main()
{
    cin >> N;
    int n = N;
    while (N--)
    {
        string a;
        cin >> a;
        v.push_back(a);
    }
    int ans = 1;
    for (int i = v[0].size() - 1; i >= 0; i--)
    {
        set<int> s;
        for (int j = 0; j < v.size(); j++)
        {
            int num = stoi(v[j].substr(i, v[j].size()));
            s.insert(num);
        }
        if (s.size() == n)
        {
            cout << ans << endl;
            break;
        }
        ans++;
    }
}