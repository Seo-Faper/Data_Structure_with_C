#include <iostream>
#include <queue>
using namespace std;
int N;
int main()
{
    cin >> N;
    queue<int> q;
    for (int i = 1; i <= N; i++)
        q.push(i);
    while (q.size() > 1)
    {
        int a = q.front();
        cout << a << " ";
        q.pop();
        int b = q.front();
        q.push(b);
        q.pop();
    }
    cout << q.front() << endl;
    return 0;
}