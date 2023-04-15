#include <iostream>
using namespace std;
int N;
int main()
{
    cin >> N;
    string ans1;
    int tmp = 0;
    string ans2;
    int tmp2 = 0xffffff;
    for (int i = 0; i < N; i++)
    {
        string name;
        int d;
        int m;
        int y;
        cin >> name >> d >> m >> y;
        d = (31 - d) + (11 - m) * 31 + (365 * (2020 - y));
        if (d >= tmp)
        {
            tmp = d;
            ans1 = name;
        }
        if (d <= tmp2)
        {
            tmp2 = d;
            ans2 = name;
        }
    }
    cout << ans2 << endl;
    cout << ans1 << endl;
    return 0;
}