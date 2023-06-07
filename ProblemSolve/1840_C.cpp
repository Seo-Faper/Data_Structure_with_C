#include <iostream>
#include <vector>

using namespace std;

long long solve(const vector<long long> &temp, int k, int q)
{
    long long count = 0;
    long long e = 0;
    long long sum = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] <= q)
        {
            e++;
            if (e >= k)
            {
                count++;
                sum += count;
            }
        }
        else
        {
            count = 0;
            e = 0;
        }
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<long long> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }

        long long result = solve(temp, k, q);
        cout << result << endl;
    }

    return 0;
}
