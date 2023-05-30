#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        string k;
        cin >> k;
        for (int i = 0; i < k.size(); i++)
        {
            if (isupper(k[i]))
                k[i] += 32;
        }
        cout << k << endl;
    }
    return 0;
}