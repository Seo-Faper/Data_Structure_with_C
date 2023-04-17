#include <iostream>
int N;
int g[101][101];
using namespace std;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> g[i][j];
        }
    }
    return 0;
}