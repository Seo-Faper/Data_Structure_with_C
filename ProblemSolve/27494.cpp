#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool check(string t)
{
    if (t.size() < 4)
        return false;
    string find = "2023";
    stack<char> sk;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == find[sk.size()])
            sk.push(t[i]);
    }
    if (sk.size() == 4)
        return true;
    else
        return false;
}
int main()
{
    int ticket;
    cin >> ticket;

    int ans = 0;
    for (int i = 1; i <= ticket; i++)
    {
        if (check(to_string(i)))
            ans++;
    }
    cout << ans << endl;
    return 0;
}