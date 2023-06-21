#include <iostream>
#include <cmath>
using namespace std;
int N;

int main()
{
    cin >> N;
    int x1, y1, r1, x2, y2, r2;
    while (N--)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double sub = abs(r2 - r1);
        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
                cout << "1" << endl;
            else
                cout << "0" << endl;
            continue;
        }
        if (d == 0 && sub == 0)
        {
            cout << "-1" << endl;
        }
        else if (r1 + r2 == d || sub == d)
        {
            cout << "1" << endl;
        }
        else if (sub < d && d < (r1 + r2))
        {
            cout << "2" << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}