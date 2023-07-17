#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int H, W;
int arr[501];
int main()
{
    cin >> H >> W;
    for (int i = 0; i < W; i++)
    {
        cin >> arr[i];
    }
    if (W < 3)
    {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    for (int i = 1; i < W - 1; i++)
    {
        int leftMax = 0;
        int rightMax = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                leftMax = arr[j];
                break;
            }
        }
        for (int j = i + 1; j < W; j++)
        {
            if (arr[j] > arr[i])
            {
                rightMax = arr[j];
                break;
            }
        }
        cout << leftMax << "," << rightMax << endl;
    }
    cout << ans << endl;
    return 0;
}