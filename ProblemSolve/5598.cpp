#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - 3 < 'A')
        {
            s[i] += 26;
        }
        s[i] -= 3;
    }
    cout << s << endl;
    return 0;
}
/*


C : 67 -> Z (91)
B : 66 -> Y (90)
A : 65 -> X (89)


*/
