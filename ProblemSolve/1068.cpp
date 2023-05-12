#include <iostream>
#include <vector>
using namespace std;
int N;
int R;
vector<int> G[51];
int root, ans;
int dfs(int x)
{

    // cout << x << " ";
    if (x == R)
        return -1;
    if (!G[x].size())
    {
        ans++;
        return 0;
    }
    for (int i = 0; i < G[x].size(); i++)
    {
        int y = G[x][i];

        int e = dfs(y);
        if (e == -1 && G[x].size() == 1)
            ans++;
        // cout << "y: " << y << ","
        //<< "G[x].size(): " << G[x].size() << endl;
    }
    return 0;
}
int main()
{

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        if (v != -1)
            G[v].push_back(i);
        else
            root = i;
    }
    cin >> R;
    //     for (int i = 0; i < N; i++)
    //     {
    //         cout << i << " ";
    //         for (int j = 0; j < G[i].size(); j++)
    //         {
    //             cout << G[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    //    cout << "root:" << root << endl;
    dfs(root);
    cout << ans << endl;
    return 0;
}