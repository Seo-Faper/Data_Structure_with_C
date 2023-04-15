#include <iostream>
using namespace std;
int N;

int main()
{
    cin >> N;
    int ans = 0;
    int tmp = 1;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a)
        {
            ans += tmp;
            tmp++;
        }
        else
        {
            tmp = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
