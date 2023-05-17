#include <iostream>
#include <queue>
#include <cmath>
#define MAX 100000
using namespace std;
int N, K;
int vis[MAX + 1] = {
    0,
};
int way = 0;
int ans = 0;
int main()
{
    cin >> N >> K;
    queue<int> q;
    q.push(N);
    vis[N] = true;
    while (!q.empty())
    {
        int qsize = q.size();
        for (int i = 0; i < qsize; i++)
        {
            int temp = q.front();
            q.pop();

            if (temp == K)
                way++;
            vis[temp] = true;
            if (temp + 1 <= MAX && !vis[temp + 1])
                q.push(temp + 1);
            if (temp - 1 >= 0 && !vis[temp - 1])
                q.push(temp - 1);
            if (temp * 2 <= MAX && !vis[temp * 2])
                q.push(temp * 2);
        }
        if (way)
            break;
        ans++;
    }
    if (N == K)
        cout << 0 << endl
             << 1 << endl;
    else
        cout << ans << endl
             << way << endl;
    return 0;
}