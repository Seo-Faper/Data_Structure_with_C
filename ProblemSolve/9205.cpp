#include <iostream>
#include <cstring>
#include <queue>
#define P pair<int, int>
using namespace std;
int T;

bool bfs()
{
}
int main()
{
    cin >> T;
    while (T--)
    {
        if (bfs())
        {
            cout << "happy" << endl;
        }
        else
        {
            cout << "sad" << endl;
        }
    }
    return 0;
}