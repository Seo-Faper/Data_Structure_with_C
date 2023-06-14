#include <iostream>
#include <cmath>
using namespace std;
int N;
long long arr[51];
int cnt[51];
int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    for (int i = 1; i <= N; i++)
    {
        double max_d = -9999999999;
        for (int j = i + 1; j <= N; j++)
        {
            // 모든 기울기 확인
            double inc = (double)(arr[j] - arr[i]) / (j - i);
            if (inc > max_d)
            {
                cnt[i]++;
                cnt[j]++;
                max_d = inc;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        ans = max(ans, cnt[i]);
    }
    cout << ans << endl;
    return 0;
}