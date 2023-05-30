#include <iostream>
using namespace std;
int main()
{
    int m;
    int d;
    cin >> m;
    cin >> d;
    if (m <= 2)
    {
        if (m == 2 && d == 18)
        {
            cout << "Special" << endl;
            return 0;
        }
        else if (m == 2 && d > 18)
        {
            cout << "After" << endl;
            return 0;
        }
        cout << "Before" << endl;
        return 0;
    }
    else
    {
        cout << "After" << endl;
    }
    return 0;
}