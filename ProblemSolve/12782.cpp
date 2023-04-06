#include <iostream>
#include <string>
using namespace std;
int T;
string k1;
string k2;

int rev;
int solution()
{

    cin >> k1 >> k2;
    int a = 0;
    int b = 0;
    for (int i = 0; i < k1.size(); i++)
    {
        if (k1[i] == k2[i])
        {
            continue;
        }
        else
        {
            if (k1[i] == '1')
                a++;
            else
                b++;
        }
    }
    if (a < b)
        return a + (b - a);
    else if (a > b)
    {
        return b + (a - b);
    }
    else
    {
        return a;
    }
}
int main()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << solution() << endl;
    }
    return 0;
}