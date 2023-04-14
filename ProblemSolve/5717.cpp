#include <iostream>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    while (a && b)
    {
        cout << a + b << endl;
        cin >> a >> b;
    }
    return 0;
}