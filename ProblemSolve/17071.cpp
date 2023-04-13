#include <iostream>
#include <string>
#include <queue>
#define P pair<int, int>
using namespace std;
int N, K;
int v[2][500001];
int main()
{
    cin >> N >> K;
    queue<P> q;
    q.push(make_pair(N, 0));
    v[0][N] = 0;
    memset(v, -1, sizeof(v));

    while (!q.empty())
    {
        int currLoc = q.front().first;   // 현재 나의 위치
        int currTime = q.front().second; // 현재 시간

        q.pop();
        if (0 > currLoc || currLoc > 500000)
            continue;
        if (v[currTime % 2][currLoc] != -1)
            continue;

        v[currTime % 2][currLoc] = currTime;
        q.push(make_pair(currLoc + 1, currTime + 1));
        q.push(make_pair(currLoc - 1, currTime + 1));
        q.push(make_pair(currLoc * 2, currTime + 1));
    }
    for (int i = 0; i < 500000; i++)
    {
        int find = K + i * (i + 1) / 2;
        if (find > 500000)
            break;
        if (v[i % 2][find] != -1 && v[i % 2][find] <= i)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}