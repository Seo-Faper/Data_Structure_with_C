#include <iostream>
#include <string>
using namespace std;
void key(string k, int i)
{
    for (int i = 0; i < k.length(); i++)
    {
        char c = k[i];
        if (c >= 'a' && c <= 'z')
        {
            if (c - 'a' < 13)
            {
                c += 13;
            }
            else
            {
                c -= 13;
            }
        }
        else if (c >= 'A' && c <= 'Z')
        {
            if (c - 'A' < 13)
            {
                c += 13;
            }
            else
            {
                c -= 13;
            }
        }
        k[i] = c;
    }
    cout << k << endl;
}
int main()
{
    string k;
    getline(cin, k);
    key(k, 13);
    return 0;
}