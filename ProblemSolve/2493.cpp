#include <iostream>
#include <stack>
#define G pair<int, int>
using namespace std;
int N;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    stack<G> sk;

    for (int i = 1; i <= N; i++)
    {
        int curr;
        cin >> curr;
        sk.push(make_pair(i, curr));

        while (!sk.empty())
        {
            if (sk.top().second > curr)
            {
                cout << sk.top().first << " ";
                break;
            }
            sk.pop();
        }

        if (sk.empty())
            cout << 0
                 << " ";
        sk.push(make_pair(i, curr));
    }
    return 0;
}