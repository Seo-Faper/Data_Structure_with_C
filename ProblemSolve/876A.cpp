#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int minOnes = n;

        for (int i = 1; i <= n; i++)
        {
            int firstOnes = ceil(i / k);
                }

        cout << minOnes << endl;
    }

    return 0;
}
