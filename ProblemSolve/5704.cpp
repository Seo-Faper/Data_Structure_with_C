#include <iostream>
using namespace std;
int alpha[26];
int main()
{
    while (1)
    {
        string s;
        for (int i = 0; i < 26; i++)
            alpha[i] = 0;
        getline(cin, s);
        if (s == "*")
            break;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                alpha[s[i] - 'a'] = 1;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (!alpha[i])
                flag = false;
        }
        if (flag)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
}