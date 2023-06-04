#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long lld;
#define P pair<lld, lld>
using namespace std;
int N;
bool isRightTriangle(lld x1, lld y1, lld x2, lld y2, lld x3, lld y3)
{

    lld AB = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
    lld AC = (pow(x3 - x1, 2) + pow(y3 - y1, 2));
    lld BC = (pow(x3 - x2, 2) + pow(y3 - y2, 2));

    bool isRight = false;
    if (AB == AC + BC ||
        AC == AB + BC ||
        BC == AB + AC)
    {
        isRight = true;
    }

    return isRight;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    vector<P> pos;

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        lld x;
        lld y;
        cin >> x >> y;
        pos.push_back(make_pair(x, y));
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (isRightTriangle(pos[i].first, pos[i].second, pos[j].first, pos[j].second, pos[k].first, pos[k].second))
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}