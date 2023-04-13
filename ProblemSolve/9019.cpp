#include <queue>
#include <iostream>
#include <string>
#include <cstring>
#define P pair<int, string>
using namespace std;
int T;
int A, B;
bool V[10002];
int Register(int index, int curr)
{

    int D = curr * 2 % 10000;
    int S = curr == 0 ? 9999 : curr - 1;
    int L = (curr / 1000) + (curr % 1000) * 10;
    int R = (curr / 10) + (curr % 10) * 1000;
    switch (index)
    {
    case 0:
        return D;
    case 1:
        return S;
    case 2:
        return L;
    case 3:
        return R;
    }
    return 0;
}
void solution()
{

    string cmd = "DSLR";
    string ans = "";
    queue<P> q;
    q.push(make_pair(A, ""));
    V[A] = true;
    while (!q.empty())
    {
        int curr = q.front().first;
        string currC = q.front().second;
        q.pop();

        if (curr == B)
        {
            ans = currC;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            char command = cmd[i];
            int next = Register(i, curr);
            if (!V[next])
            {
                V[next] = true;
                q.push(make_pair(next, currC + command));
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        memset(V, false, sizeof(V)); // 초기화
        solution();
    }
    return 0;
}