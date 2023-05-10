#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int idx = 1;
    int table[12] = {31,
                     28,
                     31,
                     30,
                     31,
                     30,
                     31,
                     31,
                     30,
                     31,
                     30,
                     31};
    while (k--)
    {
        cout << "#" << idx << " ";
        string s;
        cin >> s;
        string m = s.substr(4, 6);
        string d = s.substr(6, 9);
        int M = stoi(m.substr(0, 2));
        int D = stoi(d);
        if (M < 1 || M > 12)
        {
            cout << -1 << endl;
        }
        else if (D < 1 || D > 31)
        {
            cout << -1 << endl;
        }
        else if (D > table[M - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s.substr(0, 4) << "/" << m.substr(0, 2) << "/" << d << endl;
        }

        idx++;
    }
    return 0;
}
/*
5
22220228
20150002
01010101
20140230
11111111
*/