#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int f(int n)
{
    if (n < 1)
        return 2;
    else
        return 4 * f(n - 1) + 1;
}
int a[4][10];
int main()
{

    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (i == 2 && j == 8)
            {
                cout << cnt << endl;
            }
            cnt++;
        }
    }
    return 0;
}