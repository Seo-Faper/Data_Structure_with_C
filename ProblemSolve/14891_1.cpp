#include <iostream>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

string s[4];
int k, n, d;
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
        int dir[4] = {0, 0, 0, 0};
        dir[n] = d;
        if (n == 0)
        {
            if (s[0][2] != s[1][6])
            {
                dir[1] = dir[0] * -1;
                if (s[1][2] != s[2][6])
                {
                    dir[2] = dir[1] * -1;
                    if (s[2][2] != s[3][6])
                    {
                        dir[3] = dir[2] * -1;
                    }
                }
            }
        }

        if (n == 1)
        {
            if (s[0][2] != s[1][6])
            {
                dir[0] = dir[1] * -1;
            }
            if (s[1][2] != s[2][6])
            {
                dir[2] = dir[1] * -1;
                if (s[2][2] != s[3][6])
                {
                    dir[3] = dir[2] * -1;
                }
            }
        }
        if (n == 2)
        {
            if (s[2][2] != s[3][6])
            {
                dir[3] = dir[2] * -1;
            }
            if (s[1][2] != s[2][6])
            {
                dir[1] = dir[2] * -1;
                if (s[0][2] != s[1][6])
                {
                    dir[0] = dir[1] * -1;
                }
            }
        }
        if (n == 3)
        {
            if (s[2][2] != s[3][6])
            {
                dir[2] = dir[3] * -1;
                if (s[1][2] != s[2][6])
                {
                    dir[1] = dir[2] * -1;
                    if (s[0][2] != s[1][6])
                    {
                        dir[0] = dir[1] * -1;
                    }
                }
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (dir[i] == 1)
            {
                q[i] = rotate(dir[i], q[i]);
                s[i] = toString(&q[i]);
            }
            else if (dir[i] == -1)
            {
                q[i] = rotate(dir[i], q[i]);
                s[i] = toString(&q[i]);
            }
        }
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