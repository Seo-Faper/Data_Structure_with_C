#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int arr[4];
int v[10000];
int get_num(int a, int b, int c, int d)
{
    int num1 = a * 1000 + b * 100 + c * 10 + d;
    int num2 = b * 1000 + c * 100 + d * 10 + a;
    int num3 = c * 1000 + d * 100 + a * 10 + b;
    int num4 = d * 1000 + a * 100 + b * 10 + c;
    return min({num1, num2, num3, num4});
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int num = get_num(arr[0], arr[1], arr[2], arr[3]);
    cout << num << endl;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            for (int k = 1; k < 10; k++)
            {
                for (int q = 1; q < 10; q++)
                {
                    int result = get_num(i, j, k, q);
                    //   cout << result << endl;
                    if (!v[result])
                        v[result] = 1;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 1111; i <= num; i++)
    {
        if (v[i])
            ans++;
    }

    cout << ans << endl;
    return 0;
}