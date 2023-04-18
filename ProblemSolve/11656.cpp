#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string arr[1001];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = s.substr(i, s.size());
    }
    sort(arr, arr + s.size());
    for (int i = 0; i < s.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}