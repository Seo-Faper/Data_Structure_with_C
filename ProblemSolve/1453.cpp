#include <iostream>
using namespace std;
int arr[101];
int N;
int main()
{
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (arr[i] == 0)
        {
            arr[a]++;
        }
        else
        {
            ans++;
        }
    }
    return 0;
}