#include <iostream>
using namespace std;
int main()
{
    string s;
    while (1)
    {
        cin >> s;
        if (s == "EOI")
            break;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }

        if (s.find("NEMO") != string::npos)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Missing" << endl;
        }
    }
    return 0;
}