#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;
    stack<string> v;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i] << endl;
    }

    return 0;
}