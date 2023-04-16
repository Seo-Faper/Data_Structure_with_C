#include <iostream>
using namespace std;
int T, N;
int main()
{

    cin >> T;
    while (T--)
    {
        cin >> N;
        int a = 0;
        int b = 0xffffff;
        int e;
        while (N--)
        {
            cin >> e;
            if (e > a)
            {
                a = e;
            }
            if (e < b)
            {
                b = e;
            }
        }
        cout << (a - b) * 2 << endl;
    }
    return 0;
}