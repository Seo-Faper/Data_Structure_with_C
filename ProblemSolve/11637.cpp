#include <iostream>
using namespace std;

int t, n, sum, ans;
vector<int> arr, major;

int main()
{
    cin >> t;
    while (t--)
    {

        cin >> n;
        sum = 0, ans = 0;
        arr.resize(n);
        major.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            ans = max(ans, arr[i]);
        }

        for (int i = 0; i < n; i++)
            if (arr[i] == ans)
                major.push_back(i + 1);

        if (major.size() > 1)
            cout << "no winner\n";
        else if (sum / 2 < ans)
            cout << "majority winner " << major[0] << '\n';
        else
            cout << "minority winner " << major[0] << '\n';
    }
}