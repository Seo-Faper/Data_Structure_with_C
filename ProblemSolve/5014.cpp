#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int F, S, G, U, D;
int vis[1000001];
int main()
{

    cin >> F >> S >> G >> U >> D;
    //   전체  현재    목표  올라갈때 내려갈때

    queue<int> q;
    q.push(S);
    vis[S] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        // cout << tmp << " ";
        if (tmp == G)
        {
            cout << vis[tmp] - 1 << endl;
            return 0;
        }
        int Up = tmp + U;
        int Down = tmp - D;

        if (1 <= Up && Up <= F && !vis[Up])
        {
            q.push(Up);

            vis[Up] = vis[tmp] + 1;
        }
        if (1 <= Down && Down <= F && !vis[Down])
        {
            q.push(Down);

            vis[Down] = vis[tmp] + 1;
        }
    }
    cout << "use the stairs" << endl;
    return 0;
}