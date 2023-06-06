#include <iostream>
#include <vector>

using namespace std;

int countVacationDates(const vector<int> &temperatures, int k, int q)
{
    int count = 0;
    int consecutive = 0;
    int sum = 0;
    for (int i = 0; i < temperatures.size(); i++)
    {
        if (temperatures[i] <= q)
        {
            consecutive++;
            if (consecutive >= k)
            {
                count++;
                sum += count;
            }
        }
        else
        {
            cout << count << endl;
            count = 0;
            consecutive = 0;
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

        vector<int> temperatures(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temperatures[i];
        }

        int result = countVacationDates(temperatures, k, q);
        cout << result << endl;
    }

    return 0;
}
