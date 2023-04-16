#include <iostream>
#include <bitset>
using namespace std;
int T;
int main()
{
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        bitset<20> bs(N);
        string s = bs.to_string();
        // cout << s << endl;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                cout << s.size() - 1 - i << " ";
        }
        cout << "\n";
    }
    return 0;
}