#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        int p = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                p += i;
        }
        if (n == p)
        {
            cout << n << " = " << 1;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    cout << " + " << i;
                }
            }
            cout << endl;
        }
        else
        {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}