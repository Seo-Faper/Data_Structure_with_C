#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define P pair<int, int>
int N;
int main()
{
    vector<P> pos;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        pos.push_back(make_pair(x, y));
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (pos[i].first == pos[j].first && pos[i].second == pos[k].second)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}