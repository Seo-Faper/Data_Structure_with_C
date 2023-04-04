#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, S, P;
int arr[51];
int main()
{
    cin >> N >> S >> P;
    int ans = -1;
    for (int i = 0; i < P; i++)
    {
        if (i < N)
            cin >> arr[i];
        else
            arr[i] = -1;
    }
    arr[P] = S;
    bool gate = false;
    for (int i = P; i >= 0; i--)
    {
        if (i == P && arr[i] > arr[i - 1])
        {
            int tmp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = tmp;
            ans = i;
            gate = true;
            //    cout << "랭킹 진입 성공 " << ans << endl;
        }
        if (!gate)
        {
            //   cout << "랭킹 진입 실패" << endl;
            break;
        }
        // cout << arr[i] << ", " << S << ", " << i << endl;
        if (arr[i] <= S)
        {
            ans = i;
        }
    }
    // for (int i = 0; i <= P; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
    if (ans != -1)
        ans++;
    cout << (ans) << endl;

    return 0;
}
