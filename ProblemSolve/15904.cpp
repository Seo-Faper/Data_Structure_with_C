#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string k;
    getline(cin, k);
    string u = "UCPC";
    stack<char> sk;
    for (int i = 0; i < k.size(); i++)
    {
        if (u[sk.size()] == k[i])
        {

            sk.push(k[i]);
        }
    }
    if (sk.size() == 4)
    {
        cout << "I love UCPC" << endl;
    }
    else
    {
        cout << "I hate UCPC" << endl;
    }
    return 0;
}