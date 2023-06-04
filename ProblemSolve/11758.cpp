#include <iostream>
#include <vector>
#define P pair<int, int>
using namespace std;
int main()
{
    vector<P> pos(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> pos[i].first >> pos[i].second;
    }
    int result = (pos[1].first - pos[0].first) * (pos[2].second - pos[0].second) - (pos[2].first - pos[0].first) * (pos[1].second - pos[0].second);
    if (result < 0)
        cout << -1;
    else if (result > 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}