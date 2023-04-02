#include <iostream>
using namespace std;
int board[20][20];
int main()
{
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            cin >> board[i][j];
        }
    }

    return 0;
}