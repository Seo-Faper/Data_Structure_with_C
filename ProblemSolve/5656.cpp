#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    while (1)
    {
        int a, b;
        string op;
        cin >> a >> op >> b;
        if (op == "E")
            break;
        else
            cout << "Case " << count << ": ";
        if (op == "<")
        {
            cout << ((a < b) ? "true" : "false") << endl;
        }
        else if (op == "<=")
        {
            cout << ((a <= b) ? "true" : "false") << endl;
        }
        else if (op == ">")
        {
            cout << ((a > b) ? "true" : "false") << endl;
        }
        else if (op == ">=")
        {
            cout << ((a >= b) ? "true" : "false") << endl;
        }
        else if (op == "==")
        {
            cout << ((a == b) ? "true" : "false") << endl;
        }
        else if (op == "!=")
        {
            cout << ((a != b) ? "true" : "false") << endl;
        }
        count++;
    }
    return 0;
}