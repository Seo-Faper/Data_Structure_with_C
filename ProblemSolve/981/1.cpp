#include <iostream>
#include <string>
#include <stack>
using namespace std;
int alpha[26];

int main()
{
    string s;
    cin >> s;
    string k = "KOREA";
    string y = "YONSEI";
    stack<char> ks;
    stack<char> ys;
    int a = 0xffffff;
    int b = 0xffffff;
    for (int i = 0; i < s.size(); i++)
    {
        if (k[ks.size()] == s[i])
        {
            ks.push(s[i]);
        }
        if (ks.size() == 5)
        {
            a = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (y[ys.size()] == s[i])
        {
            ys.push(s[i]);
        }
        if (ys.size() == 6)
        {
            b = i;
            break;
        }
    }

    if (a > b)
    {
        cout << "YONSEI" << endl;
    }
    else
    {
        cout << "KOREA" << endl;
    }
    return 0;
}