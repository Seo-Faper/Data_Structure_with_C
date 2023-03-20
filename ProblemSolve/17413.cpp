#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    stack<char> sk;
    string k = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '<')
        {
            reverse(k.begin(), k.end());
            cout << k;
            k = "";
            sk.push(s[i]);
        }
        else if (s[i] == '>')
        {
            cout << '<' << k << '>'; // 뒤집지 말고 출력
            k = "";
            sk.pop();
        }
        else if (s[i] == ' ' && sk.size() == 0) // 공백이면 뒤집어 출력
        {
            reverse(k.begin(), k.end());

            cout << k << ' ';
            k = "";
        }
        else // 공백 포함 <, > 제외한 글자를 담은 다음에 뒤집어야 하는지 어쩐지를 정하면 됨.
        {
            k += s[i];
        }
    }
    reverse(k.begin(), k.end());
    cout << k;
    cout << "\n";
    return 0;
}