#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
int t;
vector<int> odd;
vector<int> even;
int main()
{
    cin >> N;

    int a = -1;
    int b = -1;

    for (int i = 0; i < N; i++)
    {
        cin >> t;
        if (t % 2 == 0)
            even.push_back(t);
        else
            odd.push_back(t);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    // for (int i = 0; i < odd.size(); i++)
    // {
    //     cout << odd[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < even.size(); i++)
    // {
    //     cout << even[i] << " ";
    // }
    // cout << endl;

    if (odd.size() > 0 && even.size() > 0) // 짝수 홀수 모두 하나 이상은 있어야 함
    {
        int t0 = 0xffffff;
        for (int i = 0; i < odd.size(); i++)
        {
            for (int j = 0; j < even.size(); j++)
            {
                t0 = min(t0, abs(odd[i] - even[j]));
            }
        }
        b = t0;
    }
    else
        b = -1;

    if (odd.size() < 2 && even.size() < 2)
        a = -1;
    else
    {
        int t1 = 0xffffff;

        for (int i = 0; i < odd.size() - 1; i++)
        {

            t1 = min(t1, abs(odd[i] - odd[i + 1]));
        }

        int t2 = 0xffffff;
        //  cout << even.size() << endl;
        int e = even.size();
        for (int i = 0; i < e - 1; i++)
        {
            t2 = min(t2, abs(even[i] - even[i + 1]));
        }
        a = min(t1, t2);
    }

    cout << a << " " << b << endl;
    return 0;
}