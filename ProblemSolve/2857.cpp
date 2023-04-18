#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    bool f = true;
    for (int i = 1; i <= 5; i++)
    {
        cin >> s;
        if (s.find("FBI") != string::npos)
        {
            cout << i << " ";
            f = false;
        }
    }
    if (f)
        cout << "HE GOT AWAY!";
    cout << endl;
    return 0;
}