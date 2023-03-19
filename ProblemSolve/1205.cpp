#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, S, P;

int main()
{
    cin >> N >> S >> P;
    int ans = 0;
    int arr[P];
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
    }
    for (int i = 0; i < P; i++)
    {
        if (S >= arr[i])
        {
            v.insert(v.begin() + i, S);
            if (S == arr[i] && v.size() > P)
            {
                cout << -1 << endl;
                break;
            }
            else
                cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
