#include <iostream>
#include <algorithm>
using namespace std;
int arr[26];
int N;
int main()
{
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        for (int i = 0; i < 26; i++)
            arr[i] = 0;
        string s;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++)
        {
            s[j] = toupper(s[j]);
            int a = s[j] - 'A';
            arr[a]++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (!arr[j])
            {
                cout << "Case " << i << ": Not a pangram";
                break;
            }
        }
        continue;
        for (int j = 0; j < 26; j++)
        {
            if (arr[j] < 2)
            {
                cout << "Case " << i << ": Pangram!";
                break;
            }
        }
        continue;
        cout << "Case " << i << ": Double pangram!!";
    }
    return 0;
}