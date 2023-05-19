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
int main()
{
    cin >> T;
    while ((T--))
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
        sort(B, B + N);

        do
        {
            vector<int> t;
            for (int i = 0; i < N; i++)
            {
                t.push_back(B[i]);
            }
            ans.push_back(t);
        } while (next_permutation(B, B + N));
        for (int i = 0; i < ans.size(); i++)
        {
            bool ch = true;
            vector<int> re;
            for (int k = 0; k < re.size(); k++)
            {
                re[k] = 0;
            }
            for (int j = 0; j < ans[i].size(); j++)
            {
                //   cout << " P : (" << abs(A[i]) << "," << ans[i][j] << ")";
                if (abs(A[j] - ans[i][j]) > K)
                {
                    ch = false;
                    break;
                }
                re.push_back(ans[i][j]);
            }
            if (ch)
            {
                for (int k = 0; k < re.size(); k++)
                {
                    cout << re[k] << " ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}