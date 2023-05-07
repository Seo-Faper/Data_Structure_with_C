#include <iostream>
#include <stack>
#include <string>
using namespace std;
string s;
int main()
{
    cin >> s;
    stack<char> sk1;
    stack<char> sk2;
    bool f = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            sk1.push('(');
        }
        else if (s[i] == '[')
        {
            sk2.push('[');
        }
        else if (s[i] == ')')
        {
            if (sk1.empty())
                f = false;
            else
                sk1.pop();
        }
        else if (s[i] == ']')
        {
            if (sk2.empty())
                f = false;
            else
                sk2.pop();
        }
    }
    cout << sk1.size() << endl;
    cout << sk2.size() << endl;
    return 0;
}