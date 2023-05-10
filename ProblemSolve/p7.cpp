#include <iostream>
#include <string>
using namespace std;
int value[26];
int main()
{
    string s;
    getline(cin, s);
    string ans;
    getline(cin, ans);
    string result = "";
    for (int i = 0; i < ans.size(); i++)
    {
        // cout << isupper(ans[i]) << endl;

        if (isupper(ans[i]))
        {
            result += toupper(s[(tolower(ans[i]) - 'a')]);
        }
        else if (islower(ans[i]))
        {
            result += (s[(tolower(ans[i]) - 'a')]);
        }
        else if (!isupper(ans[i]) && !islower(ans[i]))
        {
            result += ans[i];
        }
    }
    cout << result << endl;
    return 0;
}
/*
eydbkmiqugjxlvtzpnwohracsf
Kifq oua zarxa suar bti yaagrj fa xtfgrj
*/