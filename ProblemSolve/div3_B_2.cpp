#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define V vector<int>
using namespace std;

int T;
int N, K;
int A[100000];
int B[100000];
int Z[2000000001];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        vector<V> ans;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        for (int i = 0; i < N; i++)
        {
            int minN = 1000000000;
            for (int j = 0; j < N; j++)
            {
            }
        }
        cout << endl;
    }

    return 0;
}
