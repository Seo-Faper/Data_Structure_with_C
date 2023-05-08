#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int L, P, V;
    int count = 1;
    while (true)
    {
        cin >> L >> P >> V;
        if (L * P * V == 0)
            break;
        cout << "Case " << count << ": ";

        cout << V / P * L + min(V % P, L) << endl;
        count++;
    }
    return 0;
}