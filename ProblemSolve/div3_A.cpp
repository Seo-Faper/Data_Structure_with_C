#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> p;
        for (int i = 0; i < s.size() - 1; i++)
        {
            string ss = "";
            ss += s[i];
            ss += s[i + 1];
            bool ch = true;
            for (int j = 0; j < p.size(); j++)
            {
                if (p[j] == ss)
                {
                    ch = false;
                    break;
                }
            }
            if (ch)
                p.push_back(ss);
        }
        cout << p.size() << endl;
    }
    return 0;
}