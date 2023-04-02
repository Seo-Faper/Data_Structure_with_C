#include <iostream>
#include <algorithm>
using namespace std;
int N, r;
int main()
{
    cin >> N >> r;
    int arr[N];
    int k[N - 1];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        k[i] = abs(arr[i] - arr[i + 1]);
    }
    sort(k, k + N - 1);

    cout << k[N - r - 1] << endl;
    return 0;
}