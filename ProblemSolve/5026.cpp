#include <iostream>
using namespace std;
int N;
int main()
{
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        string left = "";
        string right = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+')
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    right += s[j];
                }
                cout << stoi(left) + stoi(right) << endl;
            }
            else if (s[i] == '=')
            {
                cout << "skipped" << endl;
            }
            else
            {
                left += s[i];
            }
        }
    }
    return 0;
}