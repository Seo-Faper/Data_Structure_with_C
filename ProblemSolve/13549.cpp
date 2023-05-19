#include <iostream>
#include <deque>
#include <string>

#define MAX 200000
using namespace std;
int N, K;
int vis[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> K;
    deque<int> dq;
    dq.push_back(N);
    vis[N] = 1;
    while (!dq.empty())
    {
        int temp = dq.front();
        dq.pop_front();

        if (temp == K)
            cout << vis[K] - 1 << endl;

        if (temp * 2 < MAX && !vis[temp * 2])
        {
            dq.push_front(temp * 2);
            vis[temp * 2] = vis[temp];
        }
        if (temp + 1 < MAX && !vis[temp + 1])
        {
            dq.push_back(temp + 1);
            vis[temp + 1] = vis[temp] + 1;
        }
        if (temp - 1 >= 0 && !vis[temp - 1])
        {
            dq.push_back(temp - 1);
            vis[temp - 1] = vis[temp] + 1;
        }
    }
    return 0;
}