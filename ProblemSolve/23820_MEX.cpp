#include <iostream>
using namespace std;
long long N;
long long arr[2000004];
long long ans[2000004];
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        arr[a]++;
    }

    for (long long i = 0; i < 2000004; i++)
    {
        if (arr[i])
        {
            for (long long j = 0; j < 2000004; j++)
            {
                if (i * j > 2000004)
                    break;
                if (arr[j])
                {
                    ans[i * j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 2000004; i++)
    {
        if (!ans[i])
        {
            cout << i << " ";
            break;
        }
    }
    cout << endl;
    return 0;
}
