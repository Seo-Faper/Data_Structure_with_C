#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string k = "CAMBRIDGE";
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < k.size(); j++)
        {
            if (s[i] == k[j])
                flag = false;
        }
        if (flag)
            cout << s[i];
    }
    cout << "\n";
    return 0;
}