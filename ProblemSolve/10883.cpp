#include <iostream>
using namespace std;
int T;
int main()
{
    cin >> T;
    int ans = 0;
    while (T--)
    {
        int school, apple;
        cin >> school >> apple;
        ans += apple % school;
    }
    cout << ans << endl;
}