#include <iostream>
#include <queue>
#define P pair<int, char>
using namespace std;
int N, K, L;
int arr[101][101];

int main()
{
    queue<P> command;
    cin >> N;
    cin >> K;
    while (K--)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 2;
    }
    cin >> L;
    while (L--)
    {
        int a;
        char c;
        cin >> a >> c;
        command.push(make_pair(a, c));
    }

    return 0;
}