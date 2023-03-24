#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> v;

    for (int i = 1; i <= N; i++)
        v.push_back(i);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        reverse(v.begin() + a, v.begin() + b);
    }
    for (int i = 0; i < N; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}