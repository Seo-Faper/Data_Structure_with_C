#include <iostream>
using namespace std;
int t;
int main()
{

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        a[1] = n;
        int sum = n;
        for (int i = 2; i <= n; i++)
        {
            a[i] = i;
            sum += i;
        }
        if (sum % n != 0)
        {
            a[1] += n - (sum % n);
        }

        for (int i = 1; i <= n; i++)
        {

            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}