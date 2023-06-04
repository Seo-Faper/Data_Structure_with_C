#include <iostream>
using namespace std;
int dp[1001][3];
int N;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
    }
    return 0;
}