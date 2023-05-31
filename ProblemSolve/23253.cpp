#include <iostream>
#include <stack>
using namespace std;
int N, K;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> N >> K;

    bool flag = true;
    for (int i = 0; i < K; i++)
    {
        int p;
        cin >> p;

        int init;
        cin >> init;
        for (int j = 1; j < p; j++)
        {
            int e;
            cin >> e;
            if (init < e)
            {
                flag = false;
            }
            init = e;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}