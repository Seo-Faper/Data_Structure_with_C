#include <iostream>
using namespace std;
void solution(string s)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if (isupper(s[i]))
            a++;
        if (islower(s[i]))
            b++;
        if (isdigit(s[i]))
            c++;
        if (s[i] == ' ')
            d++;
    }
    cout << b << " " << a << " " << c << " " << d << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string k = "";
    while (getline(cin, k))
    {
        solution(k);
    }
}
