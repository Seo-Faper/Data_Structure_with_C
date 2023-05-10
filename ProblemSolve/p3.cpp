#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string m = s.substr(4, 6);
    string d = s.substr(6, 9);
    int M = stoi(m.substr(0, 2));
    int D = stoi(d);
    if (M == 2 && (D > 28 || D < 1))
    {
        cout << -1 << endl;
    }
    else if (M % 2 == 0 && (D > 30 || D < 1))
    {
        cout << -1 << endl;
    }
    return 0;
}