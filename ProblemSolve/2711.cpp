#include <iostream>
#include <string>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int a;
        string k;
        cin >> a >> k;
        a--;
        for (int i = 0; i < k.size(); i++)
        {
            if (i != a)
                cout << k[i];
        }
        cout << endl;
    }
    return 0;
}