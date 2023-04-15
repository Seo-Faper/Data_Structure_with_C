#include <iostream>
using namespace std;
int N, K;
int main()
{
    cin >> N >> K;
    int t = 0;
    bool f = true;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            t++;
            if (t == K)
            {
                cout << i << endl;
                f = false;
            }
        }
    }
    if (f)
        cout << 0 << endl;
    return 0;
}