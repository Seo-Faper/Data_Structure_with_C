#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    string s;
    string num = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            num += s[i];
        else
        {
            ans += stoi(num);
            num = "";
        }
    }
    ans += stoi(num);
    cout << ans << endl;

    return 0;
}