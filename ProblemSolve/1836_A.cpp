#include <iostream>
#include <cmath>
using namespace std;
int N;
int arr[101];
int main()
{
    cin >> N;
    while (N--)
    {
        int p;
        cin >> p;
        int m = 0;
        for (int i = 0; i < p; i++)
        {
            int a;
            cin >> a;
            m = max(m, a);
            arr[a]++;
        }
        bool flag = true;
        for (int i = 1; i <= m; i++)
        {
            if (arr[i - 1] < arr[i])
                flag = false;
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO!"
                 << "\n";
        }
        for (int i = 0; i < 100; i++)
            arr[i] = 0;
    }
    return 0;
}