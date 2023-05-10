#include <iostream>
#include <queue>
#define P pair<int, int>
using namespace std;
int N, M;
int board[101];
int v[101];
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        board[a] = b;
    }
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        board[a] = b;
    }
    queue<P> q;
    q.push(make_pair(1, 1)); // <현재 좌표, 움직인 횟수>
    while (!q.empty())
    {
        int x = q.front().first;
        int c = q.front().second;
        q.pop();
        for (int i = 1; i <= 6; i++)
        {
            int tmp = x + i;
            if (tmp == 100)
            {
                cout << c << endl;
                return 0;
            }
            if (x < 100)
            {
                while (board[tmp])
                {
                    tmp = board[tmp];
                }
                if (!v[tmp])
                {
                    q.push(make_pair(tmp, c + 1));
                    v[tmp] = 1;
                }
            }
        }
    }
    return 0;
}