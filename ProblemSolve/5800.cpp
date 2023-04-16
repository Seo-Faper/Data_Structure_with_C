#include <iostream>
#include <algorithm>
using namespace std;
int T;

int main()
{
    cin >> T;
    int c = 1;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, arr[i + 1] - arr[i]);
        }
        cout << "Class " << c << endl;
        printf("Max %d, Min %d, Largest gap %d\n", arr[n - 1], arr[0], ans);
        c++;
    }
    return 0;
}