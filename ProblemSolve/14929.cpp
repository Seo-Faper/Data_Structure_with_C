#include <iostream>
using namespace std;
int N;
int ans;
int arr[100001];
int main()
{
    cin >> N;

    int s = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << ans << endl;
    return 0;
}