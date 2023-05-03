#include <iostream>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

int dir[4];
string s[4];
int k, n, d;
void setDir(int i, int D)
{
    int next = i + 1;
    int prev = i - 1;
    dir[i] = D;
    if (next < 4 && dir[next] == 0 && s[i][2] != s[next][6])
    {
        setDir(next, D * -1);
    }
    if (prev >= 0 && dir[prev] == 0 && s[i][6] != s[prev][2])
    {
        setDir(prev, D * -1);
    }
}
string toString(const deque<char> *q)
{
    string tmp = "";
    for (auto it = q->begin(); it != q->end(); ++it)
    {
        tmp += *it;
    }
    return tmp;
}
deque<char> rotate(int d, deque<char> q)
{
    if (d == -1)
    {
        char tmp = q.front();
        q.pop_front();
        q.push_back(tmp);
        return q;
    }
    else
    {
        char tmp = q.back();
        q.pop_back();
        q.push_front(tmp);
        return q;
    }
}

int main()
{
    deque<char> q[4];
    for (int i = 0; i < 4; i++)
    {
        string k;
        cin >> k;
        for (int j = 0; j < 8; j++)
        {
            q[i].push_back(k[j]);
            s[i] = k;
        }
    }
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> n >> d;
        n -= 1;
        setDir(n, d);
        for (int i = 0; i < 4; i++)
        {
            if (dir[i] != 0)
            {
                q[i] = rotate(dir[i], q[i]);
                s[i] = toString(&q[i]);
            }
        }
        for (int i = 0; i < 4; i++)
            dir[i] = 0;
    }
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        if (s[i][0] == '1')
        {
            ans += pow(2, i);
        }
    }
    cout << ans << endl;
    return 0;
}