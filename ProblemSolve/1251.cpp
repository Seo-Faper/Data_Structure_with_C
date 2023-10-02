#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string reverse(string w)
{
    string re = "";
    for (int i = w.size() - 1; i >= 0; i--)
    {
        re += w[i];
    }
    return re;
}
int main()
{
    string s;
    cin >> s;
    string word1 = "";
    string word2 = "";
    string word3 = "";
    vector<string> dic;
    for (int i = 0; i < s.size(); i++)
    {
        word1 += s[i];
        for (int j = i + 1; j < s.size() - 1; j++)
        {
            word2 += s[j];
            for (int k = j + 1; k < s.size(); k++)
            {
                word3 += s[k];
            }
            // cout << word1 << "," << word2 << "," << word3 << endl;
            dic.push_back(reverse(word1) + reverse(word2) + reverse(word3));
            word3 = "";
        }
        word2 = "";
    }
    sort(dic.begin(), dic.end());
    cout << dic[0] << endl;
    return 0;
}