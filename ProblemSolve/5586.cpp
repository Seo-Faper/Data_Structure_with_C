#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int a = 0;
    int b = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I')
        {
            a++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I')
        {
            b++;
        }
    }
    cout << a << endl;
    cout << b << endl;
    return 0;
}