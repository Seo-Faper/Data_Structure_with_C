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
        n--;

        q[n] = rotate(d, q[n]);
        s[n] = toString(&q[n]);
        if (n == 0)
        {
            if (s[0][2] != s[1][6]) // 2 :오른쪽 6 : 왼쪽
            {
                d *= -1;
                q[1] = rotate(d, q[1]);
                s[1] = toString(&q[1]);
                if (s[1][2] != s[2][6])
                {
                    d *= -1;
                    q[2] = rotate(d, q[2]);
                    s[2] = toString(&q[2]);
                    if (s[2][2] != s[3][6])
                    {
                        d *= -1;
                        q[3] = rotate(d, q[3]);
                        s[3] = toString(&q[3]);
                    }
                }
            }
        }
        else if (n == 1) // 1번을 회전했을 때
        {

            if (s[1][2] != s[2][6])
            {
                d *= -1;
                q[2] = rotate(d, q[2]);
                s[2] = toString(&q[2]);
                if (s[2][2] != s[3][6])
                {
                    d *= -1;
                    q[3] = rotate(d, q[3]);
                    s[3] = toString(&q[3]);
                }
            }
            if (s[1][6] != s[0][2]) // 1번의 왼쪽과 0번의 오른쪽이 다르면
            {
                d *= -1;
                q[0] = rotate(d, q[0]);
                s[0] = toString(&q[0]);
            }
        }
        else if (n == 2)
        {
            if (s[1][2] != s[2][6])
            {
                d *= -1;
                q[1] = rotate(d, q[1]);
                s[1] = toString(&q[1]);
                if (s[0][3] != s[1][6])
                {
                    d *= -1;
                    q[0] = rotate(d, q[0]);
                    s[0] = toString(&q[0]);
                }
            }
            if (s[3][6] != s[2][2])
            {
                d *= -1;
                q[3] = rotate(d, q[3]);
                s[3] = toString(&q[3]);
            }
        }
        else
        {
            if (s[3][6] != s[2][2])
            {
                d *= -1;
                q[2] = rotate(d, q[2]);
                s[2] = toString(&q[2]);
                if (s[2][6] != s[1][2])
                {
                    d *= -1;
                    q[1] = rotate(d, q[1]);
                    s[1] = toString(&q[1]);
                    if (s[1][6] != s[0][2])
                    {
                        d *= -1;
                        q[0] = rotate(d, q[0]);
                        s[0] = toString(&q[0]);
                    }
                }
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