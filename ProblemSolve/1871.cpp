#include <iostream>
#include <string>
using namespace std;
int N;
int main()
{
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        int a = 0, b;
        for (int i = 2; i >= 0; i--)
        {
            a += (s[2 - i] - 'A') * pow(26, i);
        }
        b = stoi(s.substr(4, 7));
        if (abs(a - b) <= 100)
        {
            cout << "nice" << endl;
        }
        else
        {
            cout << "not nice" << endl;
        }
    }
    return 0;
}