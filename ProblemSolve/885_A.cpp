#include <iostream>
#include <cmath>
using namespace std;
int T;
int N, M, K;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> N >> M >> K;
        int x, y;
        cin >> x >> y;
        int px, py;
        bool flag = true;
        for (int i = 0; i < K; i++)
        {
            cin >> px >> py;
            // cout << abs(x - px) + abs(y - py) << endl;
            if ((abs(x - px) + abs(y - py)) % 2 == 0)
            {
                //   cout << "?" << endl;
                flag = false;
            }
        }
        if (!flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
