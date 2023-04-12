#include <iostream>
using namespace std;
int N, M;
int board[501][501];

int main()
{

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
    // 패턴 5 가지
    // board[i][j] 라고 가정할 때

    return 0;
}